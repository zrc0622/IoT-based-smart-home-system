#include "ASR.h"


/****************************
      瀵勫瓨鍣ㄨ缃嚱鏁�  
*****************************/
bool I2CWrite(unsigned char reg_addr,unsigned char date)
{
    Wire.beginTransmission(ASR_I2C_ADDR);  //鍙戦�丏evice鍦板潃
    Wire.write(reg_addr);              //鍙戦�佽鎿嶄綔鐨勫瘎瀛樺櫒鍦板潃 
    Wire.write(date);                  //鍙戦�佽璁剧疆鐨勫��
    if(Wire.endTransmission()!=0)            //鍙戦�佺粨鏉熶俊鍙�
      {
          delay(10);
          return false;
      }
      delay(10);
      return true;  
}

/****************************
      妫�娴嬪�艰鍙栧嚱鏁�  
*****************************/
bool WireReadData(unsigned char reg_addr,unsigned char *value,int num)
{   
    Wire.beginTransmission(ASR_I2C_ADDR);  //鍙戦�丏evice鍦板潃
    Wire.write(reg_addr);              //鍙戦�佽鎿嶄綔鐨勫瘎瀛樺櫒鍦板潃  
    delay(10);
    if(Wire.endTransmission()!=0)            //鍙戦�佺粨鏉熶俊鍙�
     {
          delay(10);
          return false;
     }
      delay(10);


    Wire.requestFrom(ASR_I2C_ADDR, num);

    while(Wire.available())
    {
        char ff = Wire.read();    // receive a byte as character
        *value = ff;
        value++;
        delay(10);
    } 
        
     return true; 
 }


/*****************************
       RGB璁剧疆鍑芥暟
******************************/
bool RGB_Set(unsigned char R,unsigned char G,unsigned char B)
{
      Wire.beginTransmission(ASR_I2C_ADDR);  //鍙戦�丏evice鍦板潃
      Wire.write(ASR_RGB_ADDR); 
      Wire.write(R);
      Wire.write(G);      
      Wire.write(B);
      if(Wire.endTransmission()!=0)            //鍙戦�佺粨鏉熶俊鍙�
      {
          delay(10);
          return false;
      }
      delay(10);
      return true;
}

/*****************************
       鍗曞瓧鑺傝鍙栧嚱鏁�
******************************/
bool I2CWrite_byte(unsigned char date)
{
    Wire.beginTransmission(ASR_I2C_ADDR);  //鍙戦�丏evice鍦板潃
    Wire.write(date);                  //鍙戦�佽璁剧疆鐨勫��
    if(Wire.endTransmission()!=0)            //鍙戦�佺粨鏉熶俊鍙�
      {
          delay(10);
          return false;
      }
      delay(10);
      return true;  
}

/*****************************
       蹇欓棽绛夊緟鍙栧嚱鏁�
******************************/
void BusyWait(void)
{
  
  unsigned char busy_flag = 0xff;
  while(busy_flag != 0)
  {
      WireReadData(ASR_BUSY,&busy_flag,1);
      Serial.println(busy_flag);
      delay(100);
    } 
  
  }

/*****************************
       娣诲姞璇嶆潯鍑芥暟
******************************/
void AsrAddWords(unsigned char idNum,unsigned char * words)
{     
     unsigned char date_num =strlen(words)+2;
     unsigned char str_num =strlen(words); 
     I2CWrite_byte(ASR_ADD_WORD_ADDR);     //鍙戦�佽瘝缁勫瘎瀛樺櫒鍦板潃
     I2CWrite_byte(date_num);      //鍙戦�佹湰娆″彂閫佺殑鏁版嵁闀垮害锛岃绠楁柟寮�:璇嶇粍鍙�+瀛楃涓查暱搴�+0浣滀负瀛楃涓茬粨鏉熺
     Serial.println(str_num);
     I2CWrite_byte(idNum);                //鍙戦�佽瘝缁勫彿
     for(int i = 0; i<str_num;i++)
     {
       I2CWrite_byte(words[i]);           //鍙戦�佽瘝瀛楃
      }
      I2CWrite_byte(0);               //鍙戦��0浣滀负缁撴潫绗�
  
}
