void setup() 



{



  pinMode(8,OUTPUT);

pinMode(9,OUTPUT);

pinMode(11,OUTPUT);

pinMode(12,OUTPUT);

Serial.begin(9600);



}



char dame;



void loop()



{

  if(Serial.available()>0)

    {

      dame=Serial.read();

      switch(dame)

      {

        case'F':forward();break;

        case'B':backward();break;

        case'L':leftward();break;

        case'R':rightward();break;

        default:

        digitalWrite(8,LOW);

      digitalWrite(9,LOW);

      digitalWrite(11,LOW);

      digitalWrite(12,LOW);

      }

    }



}

void forward()

{

  digitalWrite(8,HIGH);

  digitalWrite(9,LOW);

  digitalWrite(11,HIGH);

  digitalWrite(12,LOW);

  

}

void backward()

{

  digitalWrite(8,LOW);

  digitalWrite(9,HIGH);

  digitalWrite(11,LOW);

  digitalWrite(12,HIGH);

}

void rightward()

{

  digitalWrite(8,HIGH);

  digitalWrite(9,LOW);

  digitalWrite(11,LOW);

  digitalWrite(12,HIGH);

}

void leftward()

{

  digitalWrite(8,LOW);

  digitalWrite(9,HIGH);

  digitalWrite(11,HIGH);

  digitalWrite(12,LOW);

}
