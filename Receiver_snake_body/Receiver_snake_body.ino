#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>

  int cs1;  //rotation sense
  int cs2;
  int cs3;
  int cs4;

  int csra1;  //rotation sense
  int csra2;
  int csra3;
  int csra4;
  
   int csb1;  //rotation sense
  int csb2;
  int csb3;
  int csb4;
  
    int css1;  //rotation sense
  int css2;
  int css3;
  int css4;
  
   int css21;  //rotation sense
  int css22;
  int css23;
  int css24;
  
    int csl1;  //rotation sense
  int csl2;
  int csl3;
  int csl4;

  int csr1;  //rotation sense
  int csr2;
  int csr3;
  int csr4;
  
  int s1;  //rotation sense
  int s2;
  int s3;
  int s4;

  int sra1;  //rotation sense
  int sra2;
  int sra3;
  int sra4;
  
   int sb1;  //rotation sense
  int sb2;
  int sb3;
  int sb4;
  
  int ss1;  //rotation sense
  int ss2;
  int ss3;
  int ss4;
  
  int ss21;  //rotation sense
  int ss22;
  int ss23;
  int ss24;

   int css2l1;  //rotation sense
   int css2l2;
   int css2l3;
   int css2l4;

   int ss2l1;
   int ss2l2;
   int ss2l3;
 int ss2l4;

   
   int as2l1;  //rotation sense
   int as2l2;
   int as2l3;
   int as2l4;

   int css2r1;  //rotation sense
   int css2r2;
   int css2r3;
   int css2r4;

   int ss2r1;
   int ss2r2;
   int ss2r3;
 int ss2r4;

   
   int as2r1;  //rotation sense
   int as2r2;
   int as2r3;
   int as2r4;
#include <SoftwareSerial.h>
#include <Servo.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN
const byte address[6] = "00001";
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

  // increment factor
  int i;
  int j;

   int ab1;  //rotation sense
  int ab2;
  int ab3;
  int ab4;
  
   int a1;  //rotation sense
  int a2;
  int a3;
  int a4;
  
  int as1;  //rotation sense
  int as2;
  int as3;
  int as4;

  int as21;  //rotation sense
  int as22;
  int as23;
  int as24;

  int joyval;

   int minib;
  int maxib ;

   int mini;
  int maxi ;

  
   int minir;
  int maxir ;
 
  int mini1;
  int maxi1;

  
   int minil ;
  int maxil ;
  
int mini2;
  int maxi2;

int mini2l;
  int maxi2l;
  
int mini2r;
  int maxi2r;
  
   int minira ;
  int maxira ;
  

    int sl1;  //rotation sense
  int sl2;
  int sl3;
  int sl4;
  
  int al1;  //rotation sense
  int al2;
  int al3;
  int al4;

     int sr1;  //rotation sense
  int sr2;
  int sr3;
  int sr4;
  
  int ar1;  //rotation sense
  int ar2;
  int ar3;
  int ar4;
  
  int ara1;  //rotation sense
  int ara2;
  int ara3;
  int ara4;
  int counter ;
SoftwareSerial mySerial(4,3);
//int joyval;
void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
// forward
   s1=140;
s2=120;
 s3=100;
  //s4=110;

   cs1=0;  //rotation sense
   cs2=0;
   cs3=0;
   cs4=0;

     a1=s1-j;  //rotation sense
  a2=s2-j;
   a3=s3-j;
   a4=s4-j;

//  backward
   sb1=90;
sb2=87;
 sb3=84;
  //s4=110;

   csb1=0;  //rotation sense
   csb2=0;
   csb3=0;
   csb4=0;

     ab1=sb1-j;  //rotation sense
  ab2=sb2-j;
   ab3=sb3-j;
   ab4=sb4-j;
  
//left
   sl1=60;
sl2=66;
 sl3=72;
  sl4=110;

   
   csl1=1;  //rotation sense
   csl2=1;
   csl3=1;//0
   csl4=1;

    al1=sl1-j;  //rotation sense
  al2=sl2-j;
   al3=sl3-j;
   al4=sl4-j;

//right
   sr1=120;
   sr2=114;
   sr3=108;
   sr4=110;

   
   csr1=0;  //rotation sense
   csr2=0;
   csr3=0;//0
   csr4=0;

   ar1=sr1-j;  //rotation sense
   ar2=sr2-j;
   ar3=sr3-j;
   ar4=sr4-j;

//soft back
  css1=1;  //rotation sense
   css2=1;
   css3=1;
   css4=1;

   ss1=120;
   ss2=108;
   ss3=96;
  // ss4=110;

   
   as1=ss1-j;  //rotation sense
   as2=ss2-j;
   as3=ss3-j;
   as4=ss4-j;

   //sofforward
   css21=0;  //rotation sense
   css22=0;
   css23=0;
   css24=0;

   ss21=120;
   ss22=108;
   ss23=96;
 //ss24=110;

   
   as21=ss21-j;  //rotation sense
   as22=ss22-j;
   as23=ss23-j;
   as24=ss24-j;

   i=2;
   j =(i)/2;
  
   servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
  
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(1000);
  servo1.write(s1);
  servo2.write(s2);
  servo3.write(a3);
  servo4.write(a4);
  delay(1000);
  servo1.detach();
  servo2.detach();
  servo3.detach();
  servo4.detach();
  mySerial.begin(9600);
  counter=1;
}
void loop() {
 if (radio.available()){
  
    
    radio.read(&joyval, sizeof(joyval));
   Serial.println(joyval);
  }
 // joyval=1;
  mySerial.println(joyval);
  if (joyval==1)
      {
      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
 
    forward();
     //  Serial.println(1);
  //delay(17);
      }
      else  if (joyval==2) 
      {
servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
  
    backward();
      }
      else  if (joyval==3)
      {
      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
      right();
           }
      else  if (joyval==4)
      {
        servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
      left();
   }
    else  if (joyval==5)
   {
      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
   softforward();
   }
   else  if (joyval==6)
   {
      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
   softback();
   }
   else  if (joyval==7)
      {

      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
   softright();

   
   }
    else  if (joyval==8)
      {
      servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
   softleft();
   }
    else  if (joyval==9){
      
   delay(30);
   servo1.detach();
  servo2.detach();
  servo3.detach();
  servo4.detach();
    }
    else  if (joyval==10){
     delay(100);
     }
   else  if (joyval==11)
   {
     servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
  
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(30);
   servo1.detach();
  servo2.detach();
  servo3.detach();
  servo4.detach();
  
   }
   
   else  if (joyval==12)
      {
    servo1.attach(9);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(10);
   ram();
   }
     else  if (joyval==0)
      {
  delay(30);
   servo1.detach();
  servo2.detach();
  servo3.detach();
  servo4.detach();
  
// forward
  s1=130;
s2=114;
 s3=98;
  s4=110;

   cs1=0;  //rotation sense
   cs2=0;
   cs3=0;
   cs4=0;

     a1=s1-j;  //rotation sense
  a2=s2-j;
   a3=s3-j;
   a4=s4-j;
  
//left
   
   sl1=54;
sl2=60;
 sl3=66;
  sl4=110;
   
   csl1=1;  //rotation sense
   csl2=1;
   csl3=1;//0
   csl4=1;
   
    al1=sl1-j;  //rotation sense
  al2=sl2-j;
   al3=sl3-j;
   al4=sl4-j;

//right
   sr1=126;
   sr2=120;
   sr3=114;
   sr4=110;

   
   csr1=0;  //rotation sense
   csr2=0;
   csr3=0;//0
   csr4=0;

   ar1=sr1-j;  //rotation sense
   ar2=sr2-j;
   ar3=sr3-j;
   ar4=sr4-j;

//soft back
  css1=1;  //rotation sense
   css2=1;
   css3=1;
   css4=1;

   ss1=120;
   ss2=108;
   ss3=96;
  // ss4=110;

   
   as1=ss1-j;  //rotation sense
   as2=ss2-j;
   as3=ss3-j;
   as4=ss4-j;

   //softforward
   css21=0;  //rotation sense
   css22=0;
   css23=0;
   css24=0;

   ss21=115;
   ss22=105;
   ss23=95;
 //ss24=110;

   
   as21=ss21-j;  //rotation sense
   as22=ss22-j;
   as23=ss23-j;
   as24=ss24-j;

   //softleft
   css2l1=0;  //rotation sense
   css2l2=0;
   css2l3=0;
   css2l4=0;

   ss2l1=115;
   ss2l2=105;
   ss2l3=95;
 //ss2l4=110;
 
   as2l1=ss2l1-j;  //rotation sense
   as2l2=ss2l2-j;
   as2l3=ss2l3-j;
   as2l4=ss2l4-j;

   //softright

  css2r1=0;  //rotation sense
   css2r2=0;
   css2r3=0;
   css2r4=0;

   ss2r1=115;
   ss2r2=105;
   ss2r3=95;
 //ss2r4=110;

   
   as2r1=ss2r1-j;  //rotation sense
   as2r2=ss2r2-j;
   as2r3=ss2r3-j;
   as2r4=ss2r4-j;
   
   //  backward
   sb1=130;
sb2=114;
 sb3=98;
  //s4=110;

   csb1=1;  //rotation sense
   csb2=1;
   csb3=1;
   csb4=1;

     ab1=sb1-j;  //rotation sense
  ab2=sb2-j;
   ab3=sb3-j;
   ab4=sb4-j;

//ram

   sra1=130;
   sra2=114;
   sra3=98;
   sra4=110;

   
   csra1=0;  //rotation sense
   csra2=0;
   csra3=0;//0
   csra4=0;

   ara1=sra1-j;  //rotation sense
   ara2=sra2-j;
   ara3=sra3-j;
   ara4=sra4-j;
  

   }

}
/*Function Name: backward
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * for backward we have started off with counterclockwise rotation of servo so that it moves backward
 * this function gives backward motion
 * we have maintained the center of gravity/mass in a straight line
 */
   
void backward() {
  i=2;
    minib = 130;
   maxib = 46;

   // put your main code here, to run repeatedly:
  if (sb1 < maxib) {
      csb1=1;
  }
 else if (sb1 > minib) {
csb1=0;
}

if (csb1==1) {
sb1 = sb1 + i ;
ab1 = sb1-j;
//Serial.println(s1);
}
else if (csb1==0)
{
sb1 = sb1-i;
ab1 = sb1+j;
//Serial.println(s1);
}
if (sb2 < maxib) {
    csb2=1;
}
if (sb2 > minib) {
    csb2=0;
}
if (csb2==1) {
sb2 = sb2+i;
ab2=sb2-j;
}
else if (csb2==0){
sb2 = sb2-i;
ab2 = sb2+j;
}
 servo1.write(ab1);
  servo2.write(ab2);
  servo3.write(sb3);
 // servo4.write(sb4);
delay(5);
if (sb3 < maxib) {
csb3=1;
}
if (sb3 > minib)  {
csb3=0;
}
if (csb3==1) {
sb3 = sb3+i;
ab3 = sb3 -j;
}
else if (csb3==0) { 
sb3 = sb3-i;
ab3 = sb3+j;
}
if (sb4 < maxib) {
csb4=1;
}
if (sb4 > minib) {
csb4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(sb1);
  servo2.write(sb2);
  servo3.write(ab3);
  //servo4.write(a4);
  delay(5);

}
/*Function Name: forward
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * for forward we have started off with clockwise rotation of servo so that it moves backward
 * this function gives forward motion
 * for forward motion, speed of rotation of servo angles has been increased
 * we have maintained Center of mass in a straight line to get a smooth forward motion
 */

void forward() {
  i=4;
     mini = 130;
   maxi = 28;

   // put your main code here, to run repeatedly:
  if (s1 < maxi) {
      cs1=1;
  }
if (s1 > mini) {
cs1=0;
}
if (cs1==1) {
s1 = s1+i;
a1 = s1-j;
Serial.println(s1);
}
else if (cs1==0)
{
s1 = s1-i;
a1 = s1+j;
Serial.println(s1);
}
if (s2 < maxi) {
    cs2=1;
}
if (s2 > mini) {
    cs2=0;
}
if (cs2==1) {
s2 = s2+i;
a2=s2-j;
}
else if (cs2==0){
s2 = s2-i;
a2 = s2+j;
}
 servo1.write(a1);
  servo2.write(a2);
  servo3.write(s3);
  servo4.write(s4);
  delay(7);

if (s3 < maxi) {
cs3=1;
}
if (s3 > mini)  {
cs3=0;
}
if (cs3==1) {
s3 = s3+i;
a3 = s3 -j;
}
else if (cs3==0) { 
s3 = s3-i;
a3 = s3+j;
}
/*if (s4 < maxi) {
cs4=1;
}
if (s4 > mini) {
cs4=0;
}
if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;ū
a4 = s4+j;
}
*/
  servo1.write(s1);
  servo2.write(s2);
  servo3.write(a3);
  servo4.write(a4);
delay(7);
}
/*Function Name: left
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * for left we have started off with clockwise rotation of servo so that it moves left
 * thisfunction gives left motion
 * for left motion, speed of rotation of servo angles has been increased
 * we have shifted the center of gravity to the left in order to achieve leftward motion 
 */

 
void left() {
i=1;

     minil = 130;
   maxil = 50;

   // put your main code here, to run repeatedly:
  if (sl1 < maxil) {
      csl1=1;
  }
 else if (sl1 > minil) {
csl1=0;
}

if (csl1==1) {
sl1 = sl1 + i ;
al1 = sl1-j;
//Serial.println(s1);
}
else if (csl1==0)
{
sl1 = sl1-i;
al1 = sl1+j;
//Serial.println(s1);
}
if (sl2 < maxil) {
    csl2=1;
}
if (sl2 > minil) {
    csl2=0;
}
if (csl2==1) {
sl2 = sl2+i;
al2=sl2-j;
}
else if (csl2==0){
sl2 = sl2-i;
al2 = sl2+j;
}
 servo1.write(al1);
 servo2.write(al2);
 servo3.write(sl3);
 servo4.write(s4);
delay(5);
if (sl3 < maxil) {
csl3=1;
}
if (sl3 > minil)  {
csl3=0;
}
if (csl3==1) {
sl3 = sl3+i;
al3 = sl3 -j;
}
else if (csl3==0) { 
sl3 = sl3-i;
al3 = sl3+j;
}
if (sl4 < maxil) {
csl4=1;
}
if (sl4 > minil) {
csl4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(sl1);
  servo2.write(sl2);
  servo3.write(al3);
  //servo4.write(a4);
  delay(5);

}
/*Function Name: right
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * for left we have started off with counterclockwise rotation of servo so that it moves right
 * thisfunction gives right motion
 * for right motion, speed of rotation of servo angles has been increased
 * we have shifted the center of gravity to the right in order to achieve rightward motion 
 */

void right() {
i=1;
 minir = 130;
   maxir = 45;
  

   // put your main code here, to run repeatedly:
  if (sr1 < maxir) {
      csr1=1;
  }
 else if (sr1 > minir) {
csr1=0;
}

if (csr1==1) {
sr1 = sr1 + i ;
ar1 = sr1-j;
//Serial.println(s1);
}
else if (csr1==0)
{
sr1 = sr1-i;
ar1 = sr1+j;
//Serial.println(s1);
}
if (sr2 < maxir) {
    csr2=1;
}
if (sr2 > minir) {
    csr2=0;
}
if (csr2==1) {
sr2 = sr2+i;
ar2=sr2-j;
}
else if (csr2==0){
sr2 = sr2-i;
ar2 = sr2+j;
}
 servo1.write(ar1);
 servo2.write(ar2);
  servo3.write(sr3);
  servo4.write(s4);
delay(5);
if (sr3 < maxir) {
csr3=1;
}
if (sr3 > minir)  {
csr3=0;
}
if (csr3==1) {
sr3 = sr3+i;
ar3 = sr3 -j;
}
else if (csr3==0) { 
sr3 = sr3-i;
ar3 = sr3+j;
}
if (sr4 < maxir) {
csr4=1;
}
if (sr4 > minir) {
csr4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(sr1);
  servo2.write(sr2);
  servo3.write(ar3);
  //servo4.write(a4);
  delay(5);

}
/*Function Name: soft left
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * the code is the same as that for left, except that we have reduced the amplitude by reducing the range and initial angles
 *speeds have also been reduced 
  */

void softleft() {
  i=2;
   mini2l=124;
   maxi2l=52;
  
   // put your main code here, to run repeatedly:
  if (ss2l1 < maxi2l) {
      css2l1=1;
  }
 else if (ss2l1 > mini2l) {
css2l1=0;
}

if (css2l1==1) {
ss2l1 = ss2l1 + i ;
as2l1 = ss2l1-j;
//Serial.println(s1);
}
else if (css2l1==0)
{
ss2l1 = ss2l1-i;
as2l1 = ss2l1+j;
//Serial.println(s1);
}
if (ss2l2 < maxi2l) {
    css2l2=1;
}
if (ss2l2 > mini2l) {
    css2l2=0;
}
if (css2l2==1) {
ss2l2 = ss2l2+i;
as2l2=ss2l2-j;
}
else if (css2l2==0){
ss2l2 = ss2l2-i;
as2l2 = ss2l2+j;
}
 servo1.write(as2l1);
  servo2.write(as2l2);
  servo3.write(ss2l3);
 // servo4.write(s4);
delay(5);
if (ss2l3 < maxi2l) {
css2l3=1;
}
if (ss2l3 > mini2l)  {
css2l3=0;
}
if (css2l3==1) {
ss2l3 = ss2l3+i;
as2l3 = ss2l3 -j;
}
else if (css2l3==0) { 
ss2l3 = ss2l3-i;
as2l3 = ss2l3+j;
}
if (ss2l4 < maxi2l) {
css2l4=1;
}
if (ss2l4 > mini2l) {
css2l4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(ss2l1);
  servo2.write(ss2l2);
  servo3.write(as2l3);
  //servo4.write(as4);
  delay(5);

}

/*Function Name: soft right
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * the code is the same as that for right, except that we have reduced the amplitude by reducing the range and initial angles
 *speeds have also been reduced 
  */
  void softright() {
  i=2;
 mini2r=115;
 maxi2r=45;
  
   // put your main code here, to run repeatedly:
  if (ss2r1 < maxi2r) {
      css2r1=1;
  }
 else if (ss2r1 > mini2r) {
css2r1=0;
}

if (css2r1==1) {
ss2r1 = ss2r1 + i ;
as2r1 = ss2r1-j;
//Serial.println(s1);
}
else if (css2r1==0)
{
ss2r1 = ss2r1-i;
as2r1 = ss2r1+j;
//Serial.println(s1);
}
if (ss2r2 < maxi2r) {
    css2r2=1;
}
if (ss2r2 > mini2r) {
    css2r2=0;
}
if (css2r2==1) {
ss2r2 = ss2r2+i;
as2r2=ss2r2-j;
}
else if (css2r2==0){
ss2r2 = ss2r2-i;
as2r2 = ss2r2+j;
}
 servo1.write(as2r1);
  servo2.write(as2r2);
  servo3.write(ss2r3);
 // servo4.write(s4);
delay(5);
if (ss2r3 < maxi2r) {
css2r3=1;
}
if (ss2r3 > mini2r)  {
css2r3=0;
}
if (css2r3==1) {
ss2r3 = ss2r3+i;
as2r3 = ss2r3 -j;
}
else if (css2r3==0) { 
ss2r3 = ss2r3-i;
as2r3 = ss2r3+j;
}
if (ss2r4 < maxi2r){
css2r4=1;
}
if (ss2r4 > mini2r) {
css2r4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(ss2r1);
  servo2.write(ss2r2);
  servo3.write(as2r3);
  //servo4.write(as4);
  delay(5);

}
/*Function Name: soft forward
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * the code is the same as that for forward, except that we have reduced the amplitude by reducing the range and initial angles
 *speeds have also been reduced 
  */
void softforward() {
  i=2;
  mini2=116;
  maxi2=53;
  
   // put your main code here, to run repeatedly:
  if (ss21 < maxi2) {
      css21=1;
  }
 else if (ss21 > mini2) {
css21=0;
}

if (css21==1) {
ss21 = ss21 + i ;
as21 = ss21-j;
//Serial.println(s1);
}
else if (css21==0)
{
ss21 = ss21-i;
as21 = ss21+j;
//Serial.println(s1);
}
if (ss22 < maxi2) {
    css22=1;
}
if (ss22 > mini2) {
    css22=0;
}
if (css22==1) {
ss22 = ss22+i;
as22=ss22-j;
}
else if (css22==0){
ss22 = ss22-i;
as22 = ss22+j;
}
 servo1.write(as21);
  servo2.write(as22);
  servo3.write(ss23);
 // servo4.write(s4);
delay(7);
if (ss23 < maxi2) {
css23=1;
}
if (ss23 > mini2)  {
css23=0;
}
if (css23==1) {
ss23 = ss23+i;
as23 = ss23 -j;
}
else if (css23==0) { 
ss23 = ss23-i;
as23 = ss23+j;
}
if (ss24 < maxi2) {
css24=1;
}
if (ss24 > mini2) {
css24=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(ss21);
  servo2.write(ss22);
  servo3.write(as23);
  //servo4.write(as4);
  delay(7);

}
/*Function Name: soft back
 * Input : None;
 * Output : None;
 * Logic: different values have been assigned to the servos and servo angles have been continuously incremented/ decremented within the range.
 * these angles have been written.  
 * the code is the same as that for backward, except that we have reduced the amplitude by reducing the range and initial angles
 *speeds have also been reduced 
  */
  void softback() {
 i=2;
 mini1=124;
   maxi1=50;

   // put your main code here, to run repeatedly:
  if (ss1 < maxi1) {
      css1=1;
  }
 else if (ss1 > mini1) {
css1=0;
}

if (css1==1) {
ss1 = ss1 + i ;
as1 = ss1-j;
//Serial.println(s1);
}
else if (css1==0)
{
ss1 = ss1-i;
as1 = ss1+j;
//Serial.println(s1);
}
if (ss2 < maxi1) {
    css2=1;
}
if (ss2 > mini1) {
    css2=0;
}
if (css2==1) {
ss2 = ss2+i;
as2=ss2-j;
}
else if (css2==0){
ss2 = ss2-i;
as2 = ss2+j;
}
 servo1.write(as1);
  servo2.write(as2);
  servo3.write(ss3);
 // servo4.write(s4);
delay(5);
if (ss3 < maxi1) {
css3=1;
}
if (ss3 > mini1)  {
css3=0;
}
if (css3==1) {
ss3 = ss3+i;
as3 = ss3 -j;
}
else if (css3==0) { 
ss3 = ss3-i;
as3 = ss3+j;
}
if (ss4 < maxi1) {
css4=1;
}
if (ss4 > mini1) {
css4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(ss1);
  servo2.write(ss2);
  servo3.write(as3);
  //servo4.write(as4);
  delay(5);

}


/*Function Name: ramp
 * * Input : None;
 * Output : None;
 * Logic:  the function logic is same as the forward function
 * amplitudes have been increased by increasing the initial angles and range for the servo to rotate
 * this enables the bot to move on the ramp
  */


void ram() {
  i=1;
    minira = 130;
   maxira = 50;

   // put your main code here, to run repeatedly:
  if (sra1 < maxira) {
      csra1=1;
  }
 else if (sra1 > minira) {
csra1=0;
}

if (csra1==1) {
sra1 = sra1 + i ;
ara1 = sra1-j;
//Serial.println(s1);
}
else if (csra1==0)
{
sra1 = sra1-i;
ara1 = sra1+j;
//Serial.println(s1);
}
if (sra2 < maxira) {
    csra2=1;
}
if (sra2 > minira) {
    csra2=0;
}
if (csra2==1) {
sra2 = sra2+i;
ara2=sra2-j;
}
else if (csra2==0){
sra2 = sra2-i;
ara2 = sra2+j;
}
 servo1.write(ara1);
  servo2.write(ara2);
  servo3.write(sra3);
 // servo4.write(s4);
delay(5);
if (sra3 < maxira) {
csra3=1;
}
if (sra3 > minira)  {
csra3=0;
}
if (csra3==1) {
sra3 = sra3+i;
ara3 = sra3 -j;
}
else if (csra3==0) { 
sra3 = sra3-i;
ara3 = sra3+j;
}
if (sra4 < maxira) {
csra4=1;
}
if (sra4 > minira) {
csra4=0;
}
/*if (cs4==1) {
s4 = s4+i;
a4 = s4-j;
}
else
{ 
s4 = s4-i;
a4 = s4+j;
}*/

  servo1.write(sra1);
  servo2.write(sra2);
  servo3.write(ara3);
  //servo4.write(a4);
  delay(5);

}


