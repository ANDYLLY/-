void setup()

{

    pinMode(2, OUTPUT);

    pinMode(3, OUTPUT);

    pinMode(4, OUTPUT);

    pinMode(5, OUTPUT);

    pinMode(6, OUTPUT);

    digitalWrite(6,LOW);//lock置低电位

    Serial.begin(9600);

}



void loop()

{

  if(Serial.available()>0)

  {

    int pass=Serial.read();

    pass=pass-'0';

    Serial.print(pass);//回显

    LED(pass);

    delay(1000);

  }

}

void LED(int pass)//显示数字

{

  if(pass&0x01)

  {

    digitalWrite(2,HIGH);

  }

  else

  {

    digitalWrite(2,LOW);

  }

  if((pass>>1)&0x01)

  {

    digitalWrite(3,HIGH);

  }

  else

  {

    digitalWrite(3,LOW);

  }

  if((pass>>2)&0x01)

  {

    digitalWrite(4,HIGH);

  }

  else

  {

    digitalWrite(4,LOW);

  }

  if((pass>>3)&0x01)

  {

    digitalWrite(5,HIGH);

  }

  else

  {

    digitalWrite(5,LOW);

  }

}//数码管的连接中将数码管管脚改为阴极，空和指示灯全部连到电源上，锁销置0，其余对应连接
