//*********************************************************************************************//
//*********************************************************************************************//
//                                                                                             //
//    OOO  OOOOOO       OOOOOOOOOOOO   OOOOOOOOOOOO      OOOOOOOOO        OOO       OOO        //
//    OOO  OO     O     OOOOOOOOOOOO   OOOOOOOOOOOO    OOOOOOOOOOOOO      OOO       OOO        //
//    OOO  OO     O         OOO        OOO             OOO        OOO     OOO       OOO        //
//    OOO  OO     O         OOO        OOO             OOO                OOO       OOO        //
//    OOO  OO     O         OOO        OOOOOOOO        OOO                OOOOOOOOOOOOO        //
//    OOO  OO     O         OOO        OOOOOOOO        OOO                OOOOOOOOOOOOO        //
//    OOO  OOOOOO           OOO        OOO             OOO                OOO       OOO        //
//    OOO                   OOO        OOO             OOO        OOO     OOO       OOO        //
//    OOOOOOOOOOOOO         OOO        OOOOOOOOOOOOO    OOOOOOOOOOOOO     OOO       OOO        //
//    OOOOOOOOOOOOO         OOO        OOOOOOOOOOOOO      OOOOOOOOO       OOO       OOO        //
//                                                                                             //
//                                                                                             //
//                                                                                             //
//  Alex G. S. Miranda - Belém/PA - agosto de 2021                                             //
//  Rotina para uso de teclado de membrana 4x3 (linhas x colunas)                              //
//  Essa configuração acima pode ser alterada tranquilamente...                                //
//                                                                                             //
//                                                                                             //
//*********************************************************************************************//
//*********************************************************************************************//

int  x=0, y=0;
  
void setup() {
  Serial.begin(9600);
                                                //as 4 Linhas estão conectadas fisica e eletricamente aos pinos 5, 6, 7 e 8 do arduino
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
   
                                                //as 3 Colunas estão conectadas fisica e eletricamente aos pinos 2, 3 e 4 do arduino
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  }
    
void loop(){    
    for(y=2;y<=4;y++){                          //endereçamento das 3 colunas
    for(x=5;x<=8;x++){                          //endereçamento das 4 linhas
    digitalWrite(y, 0);
    if (digitalRead(x) == LOW)                  //verifica se alguma tecla foi pressionada
    {
      if(x==5 && y==2){Serial.println('1');}    //o resultado pode ser monitorado via serial
      if(x==5 && y==3){Serial.println('2');}    //ou manipulado aqui, conforme o caso
      if(x==5 && y==4){Serial.println('3');}
      
      if(x==6 && y==2){Serial.println('4');}
      if(x==6 && y==3){Serial.println('5');}
      if(x==6 && y==4){Serial.println('6');}

      if(x==7 && y==2){Serial.println('7');}
      if(x==7 && y==3){Serial.println('8');}
      if(x==7 && y==4){Serial.println('9');}

      if(x==8 && y==2){Serial.println('*');}
      if(x==8 && y==3){Serial.println('0');}
      if(x==8 && y==4){Serial.println('#');}
      
      while(digitalRead(x) == LOW){}
    }
    delay(10);
    digitalWrite(2, 1);digitalWrite(3, 1);digitalWrite(4, 1);
    }}}
