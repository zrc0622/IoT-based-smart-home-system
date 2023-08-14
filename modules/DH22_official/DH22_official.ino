#include <dht.h>
#define dataPin 8
dht DHT;//建立名字为DHT的对象

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int readData=DHT.read22(dataPin);//对象DHT连接的引脚是datapin，且为DHT22传感器
float t1=DHT.temperature;//对对象DHT的操作（测温）
float h1=DHT.humidity;
int t=(int)t1;
int h=(int)h1;
Serial.println(t);
Serial.println(h);
delay(2000);
}
