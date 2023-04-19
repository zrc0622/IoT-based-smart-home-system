#include <SoftwareSerial.h>
 SoftwareSerial Myserial(5,6);
 
void setup() {
  // put your setup code here, to run once:
 //软通讯Myserial  RX:5 TX:6
  pinMode(2,OUTPUT);
  Myserial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
     if(Myserial.available()>0)
     {
      char SerialData=Myserial.read();
      if(SerialData=='1'){
        digitalWrite(2,HIGH);
      }
      if(SerialData=='2'){//发送2常亮模式
        digitalWrite(2,LOW);
      }
    }
    Myserial.println(100);
    delay(5000);
}
