#include <Arduino.h>

/*定义烟雾传感器A0引脚*/
#define SMOKE_SENSOR A1      
/*初始化烟雾值*/
unsigned int SMOKE_VALUE = 0;
/*设置引脚*/
int BUZZER = 8;      //蜂鸣器引脚
/*初始化部分*/
void setup()
{
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);   //设置串口监视器波特率9600
}

void loop()
{
  /*烟雾检测部分*/
  SMOKE_VALUE = analogRead(SMOKE_SENSOR);    //读取A0口烟雾数值
  Serial.print("烟雾值 = ");
  Serial.println(SMOKE_VALUE);
   /*判断是否超过检测阀值*/
   if (SMOKE_VALUE > 160)
  {
    Serial.println("超出当前烟雾检测阀值！");
    digitalWrite(BUZZER,HIGH);
    delay(500);
    digitalWrite(BUZZER,LOW);   
  }
    delay(500);
}
