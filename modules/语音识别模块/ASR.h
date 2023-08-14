#ifndef ASR_H
#define ASR_H

#include "Arduino.h"
#include <Wire.h>
#define ASR_I2C_ADDR                    0x0f   //璇煶璇嗗埆妯″潡鍦板潃

#define ASR_ADD_WORD_ADDR           0x01   //璇嶆潯娣诲姞鍦板潃

#define ASR_MODE_ADDR               0x02   //璇嗗埆妯″紡璁剧疆鍦板潃锛屽�间负0-2锛�0:寰幆璇嗗埆妯″紡 1:鍙ｄ护妯″紡 ,2:鎸夐敭妯″紡锛岄粯璁や负寰幆妫�娴�

#define ASR_RGB_ADDR                0x03   //RGB鐏缃湴鍧�,闇�瑕佸彂涓や綅锛岀涓�涓洿鎺ヤ负鐏彿1锛氳摑 2:绾� 3锛氱豢 ,
                                           //绗簩涓瓧鑺備负浜害0-255锛屾暟鍊艰秺澶т寒搴﹁秺楂�
                                           
#define ASR_REC_GAIN                0x04   //璇嗗埆鐏垫晱搴﹁缃湴鍧�锛岀伒鏁忓害鍙缃负0x00-0x7f锛屽�艰秺楂樿秺瀹规槗妫�娴嬩絾鏄秺瀹规槗璇垽锛�
                                           //寤鸿璁剧疆鍊间负0x40-0x55,榛樿鍊间负0x40
                                           
#define ASR_CLEAR_ADDR              0x05   //娓呴櫎鎺夌數缂撳瓨鎿嶄綔鍦板潃锛屽綍鍏ヤ俊鎭墠鍧囪娓呴櫎涓嬬紦瀛樺尯淇℃伅


#define ASR_KEY_FLAG                0x06   //鐢ㄤ簬鎸夐敭妯″紡涓嬶紝璁剧疆鍚姩璇嗗埆妯″紡

#define ASR_VOICE_FLAG              0x07   //鐢ㄤ簬璁剧疆鏄惁寮�鍚瘑鍒粨鏋滄彁绀洪煶

#define ASR_RESULT                  0x08  //璇嗗埆缁撴灉瀛樻斁鍦板潃

#define ASR_BUZZER                  0x09 //铚傞福鍣ㄦ帶鍒跺啓1寮�鍚紝鍐�0鍏抽棴

#define ASR_NUM_CLECK               0x0a //褰曞叆璇嶆潯鏁扮洰鏍￠獙

#define FIRMWARE_VERSION            0x0b //璇诲彇鍥轰欢鐗堟湰

#define ASR_BUSY                    0x0c//蹇欓棽鏍囧織

bool I2CWrite(unsigned char reg_addr,unsigned char date);
bool WireReadData(unsigned char reg_addr,unsigned char *value,int num);
bool RGB_Set(unsigned char R,unsigned char G,unsigned char B);
void AsrAddWords(unsigned char idNum,unsigned char * words);
void BusyWait(void);

#endif
