void speech1(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x31;
  head[6] = 0xC9;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech2(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x32;
  head[6] = 0xCA;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech3(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x33;
  head[6] = 0xCB;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech4(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x34;
  head[6] = 0xCC;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech5(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x35;
  head[6] = 0xCD;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech6(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x36;
  head[6] = 0xCE;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech7(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x37;
  head[6] = 0xCF;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech8(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x38;
  head[6] = 0xC0;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech9(){
  unsigned char i = 0;
  unsigned char head[7];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x04;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x39;
  head[6] = 0xC1;

  for(i=0; i<7; i++){
    Serial.write(head[i]);
  }
}

void speech10(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x31;
  head[6] = 0x30;
  head[7] = 0xF8;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech20(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x32;
  head[6] = 0x30;
  head[7] = 0xFB;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech30(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x33;
  head[6] = 0x30;
  head[7] = 0xFA;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech40(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x34;
  head[6] = 0x30;
  head[7] = 0xFD;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech50(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x35;
  head[6] = 0x30;
  head[7] = 0xFC;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech60(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x36;
  head[6] = 0x30;
  head[7] = 0xFF;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech70(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x37;
  head[6] = 0x30;
  head[7] = 0xFE;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech80(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x38;
  head[6] = 0x30;
  head[7] = 0xF1;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speech90(){
  unsigned char i = 0;
  unsigned char head[8];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x05;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0x39;
  head[6] = 0x30;
  head[7] = 0xF0;

  for(i=0; i<8; i++){
    Serial.write(head[i]);
  }
}

void speechte1(){
  unsigned char i = 0;
  unsigned char head[14];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x0B;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xB5;
  head[6] = 0xB1;
  head[7] = 0xC7;
  head[8] = 0xB0;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xF6;

  for(i=0; i<14; i++){
    Serial.write(head[i]);
  }
}

void speechte2(){
  unsigned char i = 0;
  unsigned char head[12];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x09;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xC9;
  head[6] = 0xE3;
  head[7] = 0xCA;
  head[8] = 0xCF;
  head[9] = 0xB6;
  head[10] = 0xC8;
  head[11] = 0xA4;

  for(i=0; i<12; i++){
    Serial.write(head[i]);
  }
}

void speechshi1(){
  unsigned char i = 0;
  unsigned char head[14];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x0B;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xB5;
  head[6] = 0xB1;
  head[7] = 0xC7;
  head[8] = 0xB0;
  head[9] = 0xCA;
  head[10] = 0xAA;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0x9A;

  for(i=0; i<14; i++){
    Serial.write(head[i]);
  }
}

void speechshi2(){
  unsigned char i = 0;
  unsigned char head[12];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x09;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xB0;
  head[6] = 0xD9;
  head[7] = 0xB7;
  head[8] = 0xD6;
  head[9] = 0xD6;
  head[10] = 0xAE;
  head[11] = 0x85;

  for(i=0; i<12; i++){
    Serial.write(head[i]);
  }
}

void temperature(int x)
{
    delay(1000);
    int two = x/10;
    int one = x%10;
    speechte1();
    delay(1500);
    switch(two){
        case 1:speech10();delay(900);break;
        case 2:speech20();delay(900);break;
        case 3:speech30();delay(900);break;
        case 4:speech40();delay(900);break;
        case 5:speech50();delay(900);break;
        case 6:speech60();delay(900);break;
        case 7:speech70();delay(900);break;
        case 8:speech80();delay(900);break;
        case 9:speech90();delay(900);break;
        default:break;
    }
    switch(one){
        case 1:speech1();delay(900);break;
        case 2:speech2();delay(900);break;
        case 3:speech3();delay(900);break;
        case 4:speech4();delay(900);break;
        case 5:speech5();delay(900);break;
        case 6:speech6();delay(900);break;
        case 7:speech7();delay(900);break;
        case 8:speech8();delay(900);break;
        case 9:speech9();delay(900);break;
        default:break;
    }
    speechte2();
    delay(2000);
}

void humidity(int x)
{
    int two = x/10;
    int one = x%10;
    speechshi1();
    delay(1800);
    speechshi2();
    delay(1200);
    switch(two){
        case 1:speech10();delay(900);break;
        case 2:speech20();delay(900);break;
        case 3:speech30();delay(900);break;
        case 4:speech40();delay(900);break;
        case 5:speech50();delay(900);break;
        case 6:speech60();delay(900);break;
        case 7:speech70();delay(900);break;
        case 8:speech80();delay(900);break;
        case 9:speech90();delay(900);break;
        default:break;
    }
    switch(one){
        case 1:speech1();delay(800);break;
        case 2:speech2();delay(800);break;
        case 3:speech3();delay(800);break;
        case 4:speech4();delay(800);break;
        case 5:speech5();delay(800);break;
        case 6:speech6();delay(800);break;
        case 7:speech7();delay(800);break;
        case 8:speech8();delay(800);break;
        case 9:speech9();delay(800);break;
        default:break;
    }
}

int a;
#include <dht.h>
#define dataPin 8
dht DHT;

void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);//2号引脚接按钮
}

void loop() {
  a=digitalRead(2);
  if(!a){
    int readData=DHT.read22(dataPin);
    float t1=DHT.temperature;
    float h1=DHT.humidity;
    int t=(int)t1;
    int h=(int)h1;
    temperature(t);
    humidity(h);
    }
}
