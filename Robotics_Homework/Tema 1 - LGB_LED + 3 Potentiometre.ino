const int potLedR = A0;
const int potLedG = A2;
const int potLedB = A4;

const int pinLedR = 11;
const int pinLedG = 10;
const int pinLedB = 9;

int ledValueR;
int ledValueG;
int ledValueB;

int potValR;
int potValG;
int potValB; 
void setup() {
  // put your setup code here, to run once:
  pinMode(potLedR, INPUT);
  pinMode(potLedG, INPUT);
  pinMode(potLedB, INPUT);
  
  pinMode(pinLedR, OUTPUT);
  pinMode(pinLedG, OUTPUT);
  pinMode(pinLedB, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  potValR = analogRead(potLedR);
  potValG = analogRead(potLedG);
  potValB = analogRead(potLedB);

  ledValueR = map(potValR, 0, 1023, 0, 255);
  ledValueG = map(potValG, 0, 1023, 0, 255);
  ledValueB = map(potValB, 0, 1023, 0, 255);

  analogWrite(pinLedR, ledValueR);
  analogWrite(pinLedG, ledValueG);
  analogWrite(pinLedB, ledValueB);
}
