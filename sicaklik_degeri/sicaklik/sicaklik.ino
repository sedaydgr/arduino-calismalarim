float sicaklik; //Analog değeri dönüştüreceğimiz sıcaklık
float olculendeger; //Ölçeceğimiz analog değer
int sicaklikpin = 1;  //Analog değer girişi


void setup() {
  Serial.begin(9600);  //Seri haberleşme, ekrandan takip edeceğiz.
  }

void loop() {
  olculendeger = analogRead( sicaklikpin ); //A1'den değeri alacak
  olculendeger = ( olculendeger / 1023)*5000; //Değeri mV'ye dönüştürecek
  sicaklik = olculendeger / 100; //mV'yi sıcaklığa dönüştürecek

  Serial.print("Sicaklik : ");
  Serial.print(sicaklik);
  Serial.println("Derece");
  delay (1000);  //1 sn aralıklarla yapacak.
 
}
