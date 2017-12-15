int b1 = 0; //top row
int b2 = 1; //middle row
int b3 = 2; //bottom row
int r1 = 3; //a,i,r
int r2 = 4; //b,j,s
int r3 = 5; //c,k,t
int r4 = 6; //d,l,u
int r5 = 7; //e,m,v
int r6 = 8; //f,n,w
int r7 = 9; //g,o,x
int r8 = 10; //h,p,y
int r9 = 11; //q,z


void setup() {
  // put your setup code here, to run once:
  setupLed();
}

void loop() {
  // put your main code here, to run repeatedly:
  aTurnOn();
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

void aTurnOn () {
  digitalWrite(b1, LOW);
  digitalWrite(r1, HIGH);
}

