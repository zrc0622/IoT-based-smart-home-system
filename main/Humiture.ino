void ReadHumiture(){
    int readData=DHT.read22(HUMITURE_SENSOR);//读取温湿度
    float t1=DHT.temperature;
    float h1=DHT.humidity;
    int t=(int)t1;
    int h=(int)h1;
    WriteTemperature(t);
    WriteHumidity(h);
  }

int ccchar(int a)
{

}

void ReadAndSendTemperature(){//发送温度数据
    int readData=DHT.read22(HUMITURE_SENSOR);//读取温湿度
    float t1=DHT.temperature;
    float h1=DHT.humidity;
    int t=(int)t1;
    int h=(int)h1;
    int a,c,d,f;
    a=t;
    c=-1;
    char b[]="t =   ";
    while (a>0)
    {
        c++;
        b[4+c]=(a-a/10*10)+48;
        a=a/10;
    }
    for (d=0;c>=0&&c>d;c--)
    {
        f = b[4+d];
        b[4+d]=b[4+c];
        b[4+c]=f;
        d++;
    }
   WiFiSerial.println(b);
  }

void ReadAndSendHumidity(){//发送湿度数据
    int readData=DHT.read22(HUMITURE_SENSOR);//读取温湿度
    float t1=DHT.temperature;
    float h1=DHT.humidity;
    int t=(int)t1;
    int h=(int)h1;
    int a,c,d,f;
    a=h;
    c=-1;
    char b[]="s =   ";
    while (a>0)
    {
        c++;
        b[4+c]=(a-a/10*10)+48;
        a=a/10;
    }
    for (d=0;c>=0&&c>d;c--)
    {
        f = b[4+d];
        b[4+d]=b[4+c];
        b[4+c]=f;
        d++;
    }
   WiFiSerial.println(b);
  }

void ReadAndSendSmoke(){//发送烟雾数据
    int a,c,d,f;
    a=SMOKE_VALUE;
    c=-1;
    char b[]="y =    ";
    while (a>0)
    {
        c++;
        b[4+c]=(a-a/10*10)+48;
        a=a/10;
    }
    for (d=0;c>=0&&c>d;c--)
    {
        f = b[4+d];
        b[4+d]=b[4+c];
        b[4+c]=f;
        d++;
    }
   WiFiSerial.println(b);
   delay(500);
   if(SMOKE_VALUE>165){
   WiFiSerial.println("warn");
    }
  }
  
void ReadDressReminders()//穿衣提醒
{
    int readData=DHT.read22(HUMITURE_SENSOR);//读取温湿度
    float t1=DHT.temperature;
    int t=(int)t1;
    int t2=t;
    WriteTemperature(t);
    ReadDress(t2);
}

void ReadHumidity(){//湿度提醒
    int readData=DHT.read22(HUMITURE_SENSOR);//读取温湿度
    float h1=DHT.humidity;
    int h=(int)h1;
    int h2=h;
    WriteHumidity(h);
    delay(1000);
    ReadHumidityReminder(h2);
  }
