void speechhum1(){
  unsigned char i = 0;
  unsigned char head[42];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x27;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCA;
  head[10] = 0xAA;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xBD;
  head[14] = 0xCF;
  head[15] = 0xB5;
  head[16] = 0xCD;
  head[17] = 0xA3;
  head[18] = 0xAC;
  head[19] = 0xBB;
  head[20] = 0xB7;
  head[21] = 0xBE;
  head[22] = 0xB3;
  head[23] = 0xB8;
  head[24] = 0xC9;
  head[25] = 0xD4;
  head[26] = 0xEF;
  head[27] = 0xA3;
  head[28] = 0xAC;
  head[29] = 0xC7;
  head[30] = 0xEB;
  head[31] = 0xB4;
  head[32] = 0xF2;
  head[33] = 0xBF;
  head[34] = 0xAA;
  head[35] = 0xBC;
  head[36] = 0xD3;
  head[37] = 0xCA;
  head[38] = 0xAA;
  head[39] = 0xC6;
  head[40] = 0xF7;
  head[41] = 0x94;

  for(i=0; i<42; i++){
    Serial.write(head[i]);
  }
}//"今日湿度较低，环境干燥，请打开加湿器"
void speechhum2(){
  unsigned char i = 0;
  unsigned char head[18];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x0F;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCA;
  head[10] = 0xAA;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xCA;
  head[14] = 0xCA;
  head[15] = 0xD2;
  head[16] = 0xCB;
  head[17] = 0xA5;

  for(i=0; i<18; i++){
    Serial.write(head[i]);
  }
}//"今日湿度适宜"
void speechhum3(){
  unsigned char i = 0;
  unsigned char head[32];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x1D;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCA;
  head[10] = 0xAA;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xBD;
  head[14] = 0xCF;
  head[15] = 0xB8;
  head[16] = 0xDF;
  head[17] = 0xA3;
  head[18] = 0xAC;
  head[19] = 0xD7;
  head[20] = 0xA2;
  head[21] = 0xD2;
  head[22] = 0xE2;
  head[23] = 0xB9;
  head[24] = 0xD8;
  head[25] = 0xBA;
  head[26] = 0xC3;
  head[27] = 0xC3;
  head[28] = 0xC5;
  head[29] = 0xB4;
  head[30] = 0xB0;
  head[31] = 0xEB;

  for(i=0; i<32; i++){
    Serial.write(head[i]);
  }
}//"今日湿度较高，注意关好门窗"
void speechhum4(){
  unsigned char i = 0;
  unsigned char head[30];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x1B;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCA;
  head[10] = 0xAA;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xB3;
  head[14] = 0xAC;
  head[15] = 0xB8;
  head[16] = 0xDF;
  head[17] = 0xA3;
  head[18] = 0xAC;
  head[19] = 0xC7;
  head[20] = 0xEB;
  head[21] = 0xBD;
  head[22] = 0xF4;
  head[23] = 0xB1;
  head[24] = 0xD5;
  head[25] = 0xC3;
  head[26] = 0xC5;
  head[27] = 0xB4;
  head[28] = 0xB0;
  head[29] = 0xDC;

  for(i=0; i<30; i++){
    Serial.write(head[i]);
  }
}//"今日湿度超高，请紧闭门窗"

 void ReadHumidityReminder(int hum)
 {
    if(0<=hum&&hum<45)speechhum1();
    if(45<=hum&&hum<70)speechhum2();
    if(70<=hum&&hum<85)speechhum3();
    if(85<=hum&&hum<100)speechhum4();
 }
