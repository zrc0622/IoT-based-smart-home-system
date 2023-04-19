boolean isPirChange()//判断红外是否改变
{
    int sensorValue = digitalRead(PIR_MOTION_SENSOR);
    if(sensorValue == HIGH)//if the sensor value is HIGH?
    {
        return true;//红外改变，返回1
    }
    else
    {
        return false;//红外不改变，返回0
    }
}

void isLight()//判断灯是否需要开，保证了只有人不动5s灯才会关
{
  if(PIR_INFORMATION>=100){LED_STATUS=0;}
  else{LED_STATUS=1;}  
}

void isPeopleExist()//判断人是否存在，每次延时0.01s
{  if(isPirChange()){PIR_INFORMATION=0;delay(10);}
   else      
   {
    if(PIR_INFORMATION<600)
    {PIR_INFORMATION++;delay(10);}
   }
   isLight();
}


 
