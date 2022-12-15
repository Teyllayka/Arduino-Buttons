int switchState1 = 0;
int switchState2 = 0;
int seconds = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  switchState1 = digitalRead(2);
  switchState2 = digitalRead(3);
  seconds++;

  if (switchState1 == HIGH && seconds > 20000) {
    Serial.print(1);
    seconds = 0;
  }
  if (switchState2 == HIGH && seconds > 20000) {
    Serial.print(2);
    seconds = 0;
  }
}

