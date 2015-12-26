int mz80 = 2;
int buzzer = 13;

int durum = 0;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(mz80, INPUT);
  
}

void loop() {
  durum = digitalRead(mz80);
  int i;

  if(durum == HIGH){

  i = i+1;
  digitalWrite(buzzer, HIGH);
  delay(200);
  }
  else
  {
    digitalWrite(buzzer, LOW);
    delay(200);
  }
  if(i >= 5){
    digitalWrite(buzzer, HIGH);
  }
  
 }
