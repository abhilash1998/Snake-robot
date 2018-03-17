/*
 * Team Id: SS#2913
 * Author List: Abhilash Mane ,Akshay Pawar, Ranjani Narayana 
 * Filename: Wireless_joystick
 * Theme: Spotter Snake
 *  Global variables :int joyx=5;
int joyy
int fo
int ba
int ri
int le
int co
int bu
int ni
int ram
 */

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001";
int joyx=5;
int joyy=4;
int fo=A0;
int ba=A3;
int ri=A1;
int le=A2;
int co=2;
int bu=3;
int ni=6;
int ram=5;
void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
  pinMode(joyx,INPUT);
  pinMode(joyy,INPUT);
  pinMode(fo,INPUT_PULLUP);
  pinMode(ba,INPUT_PULLUP);
  pinMode(ri,INPUT_PULLUP);
  pinMode(le,INPUT_PULLUP);
  pinMode(co,INPUT_PULLUP);
  pinMode(bu,INPUT_PULLUP);
  pinMode(ni,INPUT_PULLUP);
  pinMode(ram,INPUT_PULLUP);
  Serial.begin(9600);
//digitalWrite(ni,HIGH);
}
/*
 * Function name: loop
 * Input :none
 * Logic :To transmit values from joytick to snakebot through nrf
 * Example Call: continously alled by nano
 */
void loop() {
  // Reads the value of respective pin
 int joyvaly=analogRead(joyy);
 int joyvalx=analogRead(joyx);
 int button1=digitalRead(fo);
 int button2=digitalRead(ba);
 int button3=digitalRead(ri);
 int button4=digitalRead(le);
 int button5=digitalRead(co);
 int button6=digitalRead(bu);
 int button7=digitalRead(ni);
 int button8=digitalRead(ram);
 //Used to send a certain value  from nrf if a pin is high 
  if (joyvalx>800)
  {
  const int  i=1;
      radio.write(&i,sizeof(i));
   Serial.println(i);
   delay(10);
  }
  else if (joyvalx<200)
  {
    int j=2;
     radio.write(&j,sizeof(j));
   Serial.println(j);
  delay(10);
  }
  else if (joyvaly>800)
  {
    int k=3;
         radio.write(&k,sizeof(k));
   Serial.println(k);
  delay(10);
  }
  
  else if (joyvaly<200)
  {
    int l=4;
         radio.write(&l,sizeof(l));
   Serial.println(l);
  delay(10);
  }
  else if(button1==0)
  {
   int b1=5;
         radio.write(&b1,sizeof(b1));
   Serial.println(b1); 
  // button1=1;
  delay(10);
  }
   
  else if(button2==0)
  {
   int b2=6;
         radio.write(&b2,sizeof(b2));
   Serial.println(b2);
  delay(10);
  }
  
  else if(button3==0)
  {
  
   int b3=7;
         radio.write(&b3,sizeof(b3));
   Serial.println(b3);   
   delay(10);
   }
  
  else if(button4==0)
  {
   int b4=8;
         radio.write(&b4,sizeof(b4));
   Serial.println(b4); 
  delay(10);
  }
  else if(button5==0)
  {
  
   int b5=9;
         radio.write(&b5,sizeof(b5));
   Serial.println(b5);
   //delay(3000);
   }
  
  else if(button6==0)
  {
   int b6=10;
         radio.write(&b6,sizeof(b6));
   Serial.println(b6); 

  }
  
  else if(button7==0)
  {
   int b7=11;
         radio.write(&b7,sizeof(b7));
   Serial.println(b7); 
 delay(10);
  }
else if(button8==0)
  {
    int b8=12; 
    Serial.println(b8);
   radio.write(&b8,sizeof(b8));
  }
 else {
    int ab=0;
    radio.write(&ab,sizeof(ab));
      Serial.println(ab);
  delay(30);
  }
  
}
