#include <BitVoicer11.h>
BitVoicerSerial bvSerial = BitVoicerSerial();
byte dataType = 4;

int b1 = 12; //top row    HIGH to turn off 
int b2 = 11; //middle row   HIGH to turn off 
int b3 = 10; //bottom row  HIGH to turn of
int r1 = 9; //a,i,r       LOW to turn off
int r2 = 8; //b,j,s
int r3 = 7; //c,k,t
int r4 = 6; //d,l,u
int r5 = 5; //e,m,v
int r6 = 4; //f,n,w
int r7 = 3; //g,o,x
int r8 = 2; //h,p,y
int r9 = 1; //q,z


void setup() {
  Serial.begin(9600);
  setupLed();
}

void loop() {
  serialEvent();
}

void setupLed () {
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
  pinMode(r5, OUTPUT);
  pinMode(r6, OUTPUT);
  pinMode(r7, OUTPUT);
  pinMode(r8, OUTPUT);
  pinMode(r9, OUTPUT);
}

void allOff () {
  digitalWrite(b1, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r3, LOW);
  digitalWrite(r4, LOW);
  digitalWrite(r5, LOW);
  digitalWrite(r6, LOW);
  digitalWrite(r7, LOW);
  digitalWrite(r8, LOW);
  digitalWrite(r9, LOW);
}

void aOn () {
  digitalWrite(b1, LOW);
  digitalWrite(r1, HIGH);
}
void bOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r2, HIGH);
}
void cOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r3, HIGH);
}
void dOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r4, HIGH);
}
void eOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r5, HIGH);
}
void fOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r6, HIGH);
}
void gOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r7, HIGH);
}
void hOn()
{
  digitalWrite(b1, LOW);
  digitalWrite(r8, HIGH);
}
      void iOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r1, HIGH);
      }
      void jOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r2, HIGH);
      }
      void kOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r3, HIGH);
      }
      void lOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r4, HIGH);
      }
      void mOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r5, HIGH);
      }
      void nOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r6, HIGH);
      }
      void oOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r7, HIGH);
      }
      void pOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r8, HIGH);
      }
      void qOn()
      {
        digitalWrite(b2, LOW);
        digitalWrite(r9, HIGH);
      }
            void rOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r1, HIGH);
            }
            void sOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r2, HIGH);
            }
            void tOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r3, HIGH);
            }
            void uOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r4, HIGH);
            }
            void vOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r5, HIGH);
            }
            void wOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r6, HIGH);
            }
            void xOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r7, HIGH);
            }
            void yOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r8, HIGH);
            }
            void zOn()
            {
              digitalWrite(b3, LOW);
              digitalWrite(r9, HIGH);
            }


void serialEvent(){
  dataType = bvSerial.getData();

  if(dataType == BV_STR){
    if(bvSerial.strData == "youThere"){
      allOff();
      yOn();
      delay(1000);
      allOff();
      delay(100);
      eOn();
      delay(1000);
      allOff();
      delay(1000);
      sOn();
      delay(1000);
      allOff();
    }
    else if(bvSerial.strData == "where"){
      allOff();
      hOn();
      delay(1000);
      allOff();
      eOn();
      delay(1000);
      allOff();
      rOn();
      delay(1000);
      allOff();
      eOn();
      delay(1000);
      allOff();
    }
    else if(bvSerial.strData == "test"){
      allOff();
      aOn();
      delay(1000);
      allOff();
    }
  }
}
