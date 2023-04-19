#include "ASR.h"


void setup() {
    unsigned char cleck = 0xff;
    unsigned char asr_version = 0;
    Wire.begin();
    Wire.setClock(100000);
    Serial.begin(115200);  //串口波特率设置 打印数据选择此波特率
    pinMode(7,OUTPUT);//风扇输出端口


    WireReadData(FIRMWARE_VERSION,&asr_version,1);
    Serial.print("asr_version is ");
    Serial.println(asr_version);
#if 1
    I2CWrite(ASR_CLEAR_ADDR,0x40);//清除电保存区，录入前需要清除电保存区
    BusyWait();
    Serial.println("clear flash is ok");   
    I2CWrite(ASR_MODE_ADDR,0);//设置检测模式 
    BusyWait();
    Serial.println("mode set is ok");              
    AsrAddWords(1,"hong deng");//从1开始
    BusyWait();    
    AsrAddWords(2,"lv deng");
    BusyWait();
    AsrAddWords(3,"lan deng");
    BusyWait();
    AsrAddWords(4,"guan deng");
    BusyWait();
    AsrAddWords(5,"kai deng");
    BusyWait();
    AsrAddWords(6,"guan feng shang");
    BusyWait();
    AsrAddWords(7,"ha ha ha");
    BusyWait();
    while(cleck != 7)//上面数字到多少，这里就是多少
    {
      WireReadData(ASR_NUM_CLECK,&cleck,1);
      Serial.println(cleck);
      delay(100);
      }
    Serial.println("cleck is ok");     
#endif

    I2CWrite(ASR_REC_GAIN,0x40);  //识别灵敏度，建议0x40-0x55
    I2CWrite(ASR_VOICE_FLAG,1);  //识别结果提示音开关设置
    I2CWrite(ASR_BUZZER,1);  //开启蜂鸣器
    RGB_Set(255,255,255);//设置模块的rgb灯为白色
    delay(500);
    I2CWrite(ASR_BUZZER,0);  //白色蜂鸣器
    RGB_Set(0,0,0);//关闭rgb    
    
          
}

void loop() {
        unsigned char result;
        WireReadData(ASR_RESULT,&result,1);//读取识别序号值，赋值给result，默认是0xff
        delay(100);
        Serial.println(result);
  
        if(result == 5)//判断读取的识别序号值是否开启风扇
        {
          digitalWrite(7,1);
        }
        else if(result == 4)
        {
            digitalWrite(7,0);
        }

}
