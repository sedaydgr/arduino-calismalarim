int led[] = {2,3,4,5,6,7,8};   //gpio led bağlantıları

void setup() {
  for(int i=0; i<=6; i++)        //ledler for döngüsü ile çıkış yapıldı
  pinMode(led[i],OUTPUT);
  }

void loop() {
  int sure = analogRead(A0);          //pottan gelen veri okutuldu
 sure=map(sure,0,1023,20,500);     //map fonksiyonu ile orantı kuruldu

    for(int i=0; i<=6; i++){
    digitalWrite(led[i],HIGH);
    delay(sure);
    digitalWrite(led[i],LOW);}
    
    for(int i=6; i>=0; i--){
    digitalWrite(led[i],HIGH);
    delay(sure);
    digitalWrite(led[i],LOW);}
  

}
