int rot = 13,
    gelb = 11,
    gruen = 10,
    blau = 9,
    weiss = 6;


int pause = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(blau, OUTPUT);
  pinMode(weiss, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rot, HIGH);
  delay(pause);
  digitalWrite(rot, LOW);
  digitalWrite(gelb, HIGH);
  delay(pause);
  digitalWrite(gelb, LOW);
  digitalWrite(gruen, HIGH);
  delay(pause);
  digitalWrite(gruen, LOW);
  digitalWrite(blau, HIGH);
  delay(pause);
  digitalWrite(blau, LOW);
  digitalWrite(weiss, HIGH);
  delay(pause);
  digitalWrite(weiss, LOW);
}

