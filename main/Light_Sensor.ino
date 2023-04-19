void EnvironmentLight(){//读取环境亮度
  int Light1=analogRead(LIGHT_SENSOR);
  delay(2);
  int Light2=analogRead(LIGHT_SENSOR);
  delay(2);
  int Light3=analogRead(LIGHT_SENSOR);
  delay(2);
  ENVIRONMENT_LIGHT=map((Light1+Light2+Light3)/3,0,1000,0,255);
  }

void LightChange(){//改变灯的亮度
    while(REAL_LIGHT<AFTER_LIGHT){
      REAL_LIGHT++;
      analogWrite(LED,REAL_LIGHT);
      delay(30);}
    while(REAL_LIGHT>AFTER_LIGHT){
      REAL_LIGHT--;
      analogWrite(LED,REAL_LIGHT);
      delay(30);}
}

void PIRAndLightSensor(){
   if((LED_STATUS==1&&LIGHT_PATTERN!=3)||LIGHT_PATTERN==2){
       SECOND_TIME=millis();
       if(SECOND_TIME<600000||SECOND_TIME-FIRST_TIME>600000){//环境不会变化很快，减少能耗设为每隔10min检测一次,开机的前10min会循环检测
        FIRST_TIME=SECOND_TIME;
        EnvironmentLight();
       }
       if(55<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT){AFTER_LIGHT=0;}//六级调节
       else if(41<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT<55){AFTER_LIGHT=10;}
       else if(29<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT<41){AFTER_LIGHT=25;}
       else if(19<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT<29){AFTER_LIGHT=50;}
       else if(11<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT<19){AFTER_LIGHT=85;}
       else if(5<=ENVIRONMENT_LIGHT&&ENVIRONMENT_LIGHT<11){AFTER_LIGHT=130;}
       else {AFTER_LIGHT=185;}
       LightChange();
      }   
   if((LED_STATUS==0&&LIGHT_PATTERN!=2)||LIGHT_PATTERN==3){AFTER_LIGHT=0;LightChange();} 
  }
