const int potLedR = A1;
const int potLedG = A3;
const int potLedB = A5;

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
  
}

void colors(int r, int g, int b){
  analogWrite(pinLedR, r);
  analogWrite(pinLedG, g);
  analogWrite(pinLedB, b);
}

void loop() {

  potValR = analogRead(potLedR);
  potValG = analogRead(potLedG);
  potValB = analogRead(potLedB);

  ledValueR = map(potValR, 0, 1023, 0, 255);
  ledValueG = map(potValG, 0, 1023, 0, 255);
  ledValueB = map(potValB, 0, 1023, 0, 255);

  colors(ledValueR, ledValueG, ledValueB);
}
