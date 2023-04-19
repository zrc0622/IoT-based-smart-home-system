void speechdress1(){
  unsigned char i = 0;
  unsigned char head[46];
  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x2B;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xB5;
  head[14] = 0xCD;
  head[15] = 0xA3;
  head[16] = 0xAC;
  head[17] = 0xB3;
  head[18] = 0xF6;
  head[19] = 0xC3;
  head[20] = 0xC5;
  head[21] = 0xC7;
  head[22] = 0xEB;
  head[23] = 0xB4;
  head[24] = 0xF7;
  head[25] = 0xBA;
  head[26] = 0xC3;
  head[27] = 0xCE;
  head[28] = 0xA7;
  head[29] = 0xBD;
  head[30] = 0xED;
  head[31] = 0xCA;
  head[32] = 0xD6;
  head[33] = 0xCC;
  head[34] = 0xD7;
  head[35] = 0xA3;
  head[36] = 0xAC;
  head[37] = 0xD7;
  head[38] = 0xA2;
  head[39] = 0xD2;
  head[40] = 0xE2;
  head[41] = 0xB1;
  head[42] = 0xA3;
  head[43] = 0xC5;
  head[44] = 0xAF;
  head[45] = 0xDA;
  for(i=0; i<46; i++){
    Serial.write(head[i]);
  }
}//"今日温度低，出门请戴好围巾手套，注意保暖"

void speechdress2(){
  unsigned char i = 0;
  unsigned char head[46];
  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x2B;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xBD;
  head[14] = 0xCF;
  head[15] = 0xB5;
  head[16] = 0xCD;
  head[17] = 0xA3;
  head[18] = 0xAC;
  head[19] = 0xBD;
  head[20] = 0xA8;
  head[21] = 0xD2;
  head[22] = 0xE9;
  head[23] = 0xB4;
  head[24] = 0xA9;
  head[25] = 0xD7;
  head[26] = 0xC5;
  head[27] = 0xC3;
  head[28] = 0xDE;
  head[29] = 0xB7;
  head[30] = 0xFE;
  head[31] = 0xA3;
  head[32] = 0xAC;
  head[33] = 0xD7;
  head[34] = 0xF6;
  head[35] = 0xBA;
  head[36] = 0xC3;
  head[37] = 0xB1;
  head[38] = 0xA3;
  head[39] = 0xC5;
  head[40] = 0xAF;
  head[41] = 0xB9;
  head[42] = 0xA4;
  head[43] = 0xD7;
  head[44] = 0xF7;
  head[45] = 0x96;
  for(i=0; i<46; i++){
    Serial.write(head[i]);
  }
}//"今日温度较低，建议穿着棉服，做好保暖工作"

void speechdress3(){
  unsigned char i = 0;
  unsigned char head[44];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x29;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xBD;
  head[14] = 0xCF;
  head[15] = 0xCE;
  head[16] = 0xAA;
  head[17] = 0xCA;
  head[18] = 0xE6;
  head[19] = 0xCA;
  head[20] = 0xCA;
  head[21] = 0xA3;
  head[22] = 0xAC;
  head[23] = 0xBD;
  head[24] = 0xA8;
  head[25] = 0xD2;
  head[26] = 0xE9;
  head[27] = 0xB4;
  head[28] = 0xA9;
  head[29] = 0xB1;
  head[30] = 0xA1;
  head[31] = 0xCD;
  head[32] = 0xE2;
  head[33] = 0xCC;
  head[34] = 0xD7;
  head[35] = 0xBA;
  head[36] = 0xCD;
  head[37] = 0xD0;
  head[38] = 0xDD;
  head[39] = 0xCF;
  head[40] = 0xD0;
  head[41] = 0xBF;
  head[42] = 0xE3;
  head[43] = 0xED;

  for(i=0; i<44; i++){
    Serial.write(head[i]);
  }
}//"今日温度较为舒适，建议穿薄外套和休闲裤"

void speechdress4(){
  unsigned char i = 0;
  unsigned char head[52];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x31;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xBD;
  head[14] = 0xCF;
  head[15] = 0xB8;
  head[16] = 0xDF;
  head[17] = 0xA3;
  head[18] = 0xAC;
  head[19] = 0xBD;
  head[20] = 0xA8;
  head[21] = 0xD2;
  head[22] = 0xE9;
  head[23] = 0xB4;
  head[24] = 0xA9;
  head[25] = 0xB1;
  head[26] = 0xA1;
  head[27] = 0xB3;
  head[28] = 0xA4;
  head[29] = 0xD0;
  head[30] = 0xE4;
  head[31] = 0xBA;
  head[32] = 0xCD;
  head[33] = 0xB3;
  head[34] = 0xA4;
  head[35] = 0xBF;
  head[36] = 0xE3;
  head[37] = 0xA3;
  head[38] = 0xAC;
  head[39] = 0xB3;
  head[40] = 0xF6;
  head[41] = 0xC3;
  head[42] = 0xC5;
  head[43] = 0xD7;
  head[44] = 0xA2;
  head[45] = 0xD2;
  head[46] = 0xE2;
  head[47] = 0xB7;
  head[48] = 0xC0;
  head[49] = 0xC9;
  head[50] = 0xB9;
  head[51] = 0xC6;

  for(i=0; i<52; i++){
    Serial.write(head[i]);
  }
}//"今日温度较高，建议穿薄长袖和长裤，出门注意防晒"

void speechdress5(){
  unsigned char i = 0;
  unsigned char head[52];

  head[0] = 0xFD;
  head[1] = 0x00;
  head[2] = 0x31;
  head[3] = 0x01;
  head[4] = 0x00;
  head[5] = 0xBD;
  head[6] = 0xF1;
  head[7] = 0xC8;
  head[8] = 0xD5;
  head[9] = 0xCE;
  head[10] = 0xC2;
  head[11] = 0xB6;
  head[12] = 0xC8;
  head[13] = 0xB8;
  head[14] = 0xDF;
  head[15] = 0xA3;
  head[16] = 0xAC;
  head[17] = 0xBD;
  head[18] = 0xA8;
  head[19] = 0xD2;
  head[20] = 0xE9;
  head[21] = 0xB6;
  head[22] = 0xE0;
  head[23] = 0xB2;
  head[24] = 0xB9;
  head[25] = 0xB3;
  head[26] = 0xE4;
  head[27] = 0xCB;
  head[28] = 0xAE;
  head[29] = 0xB7;
  head[30] = 0xD6;
  head[31] = 0xA3;
  head[32] = 0xAC;
  head[33] = 0xBC;
  head[34] = 0xF5;
  head[35] = 0xC9;
  head[36] = 0xD9;
  head[37] = 0xB3;
  head[38] = 0xF6;
  head[39] = 0xD0;
  head[40] = 0xD0;
  head[41] = 0xA3;
  head[42] = 0xAC;
  head[43] = 0xB1;
  head[44] = 0xDC;
  head[45] = 0xC3;
  head[46] = 0xE2;
  head[47] = 0xB1;
  head[48] = 0xA9;
  head[49] = 0xC9;
  head[50] = 0xB9;
  head[51] = 0x9E;

  for(i=0; i<52; i++){
    Serial.write(head[i]);
  }
}//"今日温度高，建议多补充水分，减少出行，避免暴晒"

void ReadDress(int tem)
{
    if(-10<=tem&&tem<0)speechdress1();
    if(0<=tem&&tem<10)speechdress2();
    if(10<=tem&&tem<20)speechdress3();
    if(20<=tem&&tem<30)speechdress4();
    if(30<=tem&&tem<40)speechdress5();
}
