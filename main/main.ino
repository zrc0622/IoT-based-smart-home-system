/*库函数*/
#include "ASR.h"//语音识别模块库
#include <dht.h>//温湿度传感器模块库
#include <SoftwareSerial.h>//软通讯库
#include <Arduino.h>

/*软通讯设置*/
//语音播报模块使用0、1引脚进行串行通讯
//蓝牙模块使用5、6引脚进行串行通讯
//WiFi模块使用7、8引脚进行串行通讯
//语音识别模块SDA接SDA，SCl接SCL
SoftwareSerial WiFiSerial(5,6);//软通讯BluetoothSerial  RX:5 TX:6

/*引脚定义*/
#define PIR_MOTION_SENSOR 2//引脚2接红外人体运动传感器（接收红外变化信息）
#define LED 3//引脚3接小灯（控制灯的开关）
#define HUMITURE_SENSOR 4//引脚4接温湿度传感器（接收温湿度信息）
#define LIGHT_SENSOR A0//A0接光线传感器信号接口（接收光强信息）
#define SMOKE_SENSOR A1//A1接烟雾传感器信号接口（接收有害气体浓度信息）
#define BUZZER 8//引脚8接蜂鸣器正极 

/*变量定义*/
dht DHT;//建立DHT变量，用于调用读取温湿度函数
boolean LED_STATUS;//存储灯的信息，为1时灯需要亮，为0时灯需要灭
int ENVIRONMENT_LIGHT=0;//环境的亮度（0-255）
int REAL_LIGHT=0;//当前灯泡亮度（0-255）
int AFTER_LIGHT=0;//灯泡将要变化成为的亮度（0-255）
int LIGHT_PATTERN=1;//光的模式，1：智能模式，2：常亮模式，3：常灭模式
int PIR_INFORMATION;//存储红外信息，为0说明红外改变，有人；每次检测到红外不变时加1。初始值为0
unsigned int SMOKE_VALUE = 0;//有害气体浓度，越大浓度越高
unsigned long FIRST_TIME=0;//上一次调用光线传感器的时间（距arduino开机时间）
unsigned long SECOND_TIME=0;//当前时间（距arduino开机时间）
unsigned long FIRST_TIME1=0;//上一次调用光线传感器的时间（距arduino开机时间）
unsigned long SECOND_TIME1=0;//当前时间（距arduino开机时间）
unsigned char ASR;//语音识别的结果

/*初始函数*/
void setup()
{
  /*引脚输入输出设置*/
    pinMode(PIR_MOTION_SENSOR,INPUT);//接收红外感应信息
    pinMode(LED,OUTPUT);//控制灯的开和关
    pinMode(BUZZER,OUTPUT);//控制蜂鸣器的开和关
    
  /*串口波特率设置*/
    WiFiSerial.begin(115200);//WiFi软通讯波特率设置
    
  /*语音识别模块设置*/ 
    unsigned char cleck = 0xff;
    unsigned char asr_version = 0;
    Wire.begin();//后续使用I2C
    Wire.setClock(100000);
    Serial.begin(9600);//语音识别模块串口波特率设置，打印数据选择此波特率
    WireReadData(FIRMWARE_VERSION,&asr_version,1);
    Serial.print("asr_version is ");
    Serial.println(asr_version);
#if 1//设置识别短语
    I2CWrite(ASR_CLEAR_ADDR,0x40);//清除电保存区，录入前需要清除电保存区
    BusyWait();//获取模块忙闲状态，模块闲才可以进入下一项设置
    Serial.println("clear flash is ok");   
    I2CWrite(ASR_MODE_ADDR,0);//设置检测模式为循环检测模式
    BusyWait();
    Serial.println("mode set is ok"); //模式设置完毕  
   //识别短语设置           
    AsrAddWords(1,"cong yi kai shi");//从1开始
    BusyWait();    
    AsrAddWords(2,"zhe li shi er");
    BusyWait();
    AsrAddWords(3,"shui mian mo shi");
    BusyWait();
    AsrAddWords(4,"chang liang mo shi");//识别“常亮模式”，返回4
    BusyWait();    
    AsrAddWords(5,"chang mie mo shi");//识别“常灭模式”，返回5
    BusyWait();
    AsrAddWords(6,"dang qian wen shi du");//识别“当前温湿度”，返回6
    BusyWait();
    AsrAddWords(7,"zhi neng mo shi");//识别“智能模式”，返回7
    BusyWait();
    AsrAddWords(8,"chuan yi ti xin");//识别“穿衣提醒”，返回8
    BusyWait();
    AsrAddWords(9,"shi du ti xin");//识别“湿度提醒”，返回9
    BusyWait();
    AsrAddWords(10,"qi shi wu zhi ling ya");
    BusyWait();
    while(cleck != 10)//上面识别语句序号到多少，这里就是多少
    {
      WireReadData(ASR_NUM_CLECK,&cleck,1);
      Serial.println(cleck);
      delay(100);
      }
    Serial.println("cleck is ok"); //指令设置完毕
#endif//白灯亮，蜂鸣器响说明配置完毕，可以开始识别
    I2CWrite(ASR_REC_GAIN,0x55);  //识别灵敏度，建议0x40-0x55
    I2CWrite(ASR_VOICE_FLAG,1);  //识别结果提示音开关设置
    I2CWrite(ASR_BUZZER,1);  //开启蜂鸣器
    RGB_Set(255,255,255);//设置模块的rgb灯为白色
    delay(500);
    I2CWrite(ASR_BUZZER,0);  //关闭蜂鸣器
    RGB_Set(0,0,0);//关闭rgb   

}


/*循环函数*/
void loop(){              
    delay(1000);
    isPeopleExist(); //判断人是否运动

  /*检测WiFi信息*/
    if(WiFiSerial.available()>0){//检测是否有WiFi信息
      char WiFiData=WiFiSerial.read();
      if(WiFiData=='1'){//发送1正常模式
        LIGHT_PATTERN=1;
        speech_LightPattern1();
      }
      if(WiFiData=='2'){//发送2常亮模式
        LIGHT_PATTERN=2;
        speech_LightPattern2();
      }
      if(WiFiData=='3'){//发送3常灭模式
        LIGHT_PATTERN=3;
        speech_LightPattern3();
      }
      if(WiFiData=='4'){//发送4播报温湿度
        ReadHumiture();
      }
      if(WiFiData=='5'){//发送5播报穿衣提醒
        ReadDressReminders();
      }
      if(WiFiData=='6'){//发送6播报湿度提醒
        ReadHumidity();
      }
      if(WiFiData=='a'){
      LIGHT_PATTERN=2;
      speech500();
      }
    }

  /*检测语音指令*/
    WireReadData(ASR_RESULT,&ASR,1);//读取语音指令识别序号值，赋值给ASR，默认是0xff(255)
   //判断是否有对小灯的语音指令
    if(ASR==3){
      LIGHT_PATTERN=2;
      speech500();
    }
    if(ASR==4){
      LIGHT_PATTERN=2;
      speech_LightPattern2();
    }
    if(ASR==5){
      LIGHT_PATTERN=3;
      speech_LightPattern3();
    }
    if(ASR==7){
      LIGHT_PATTERN=1;  
      speech_LightPattern1();
    }
   //判断是否点亮小灯
    PIRAndLightSensor();
   //判断是否有播报指令
    if(ASR==6){
      ReadHumiture();//播报温湿度
      }     
    if(ASR==8){
      ReadDressReminders();//穿衣提醒
      }  
    if(ASR==9){
      ReadHumidity();//湿度提醒
      }

  /*烟雾检测部分*/     
    SMOKE_VALUE = analogRead(SMOKE_SENSOR); //检测有害气体浓度
    Serial.print("烟雾值 = ");
    Serial.println(SMOKE_VALUE);
    //判断有害气体浓度是否超过危险值
    if (SMOKE_VALUE > 165){
       Serial.println("超出当前烟雾检测阀值！");
       digitalWrite(BUZZER,HIGH);
       delay(500);
       digitalWrite(BUZZER,LOW);
      }       

  /*发送数据部分*/  
    SECOND_TIME1=millis();
    if(1){//环境不会变化很快，减少能耗设为每隔10s发送一次
    FIRST_TIME1=SECOND_TIME1;
    ReadAndSendTemperature(); 
    delay(500); 
    ReadAndSendHumidity();
    delay(500); 
    ReadAndSendSmoke();
    }                                                                                                                 
}
 
