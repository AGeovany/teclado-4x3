int  x=0, y=0;
  
  void setup() {
  Serial.begin(9600);
  //Linhas
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
   
  //Colunas
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  }
    
    
    
void loop(){    
    for(y=2;y<=4;y++){
    for(x=5;x<=8;x++){
    digitalWrite(y, 0);
    if (digitalRead(x) == LOW)
    {
      if(x==5 && y==2){Serial.println('1');}
      if(x==5 && y==3){Serial.println('2');}
      if(x==5 && y==4){Serial.println('3');}
      
      if(x==6 && y==2){Serial.println('4');}
      if(x==6 && y==3){Serial.println('5');}
      if(x==6 && y==4){Serial.println('6');}

      if(x==7 && y==2){Serial.println('7');}
      if(x==7 && y==3){Serial.println('8');}
      if(x==7 && y==4){Serial.println('9');}

      if(x==8 && y==2){Serial.println('.');}
      if(x==8 && y==3){Serial.println('0');}
      if(x==8 && y==4){Serial.println('#');}
      
      while(digitalRead(x) == LOW){}
    }
    delay(10);
    //Serial.println('&');
    digitalWrite(2, 1);digitalWrite(3, 1);digitalWrite(4, 1);
    }}}
