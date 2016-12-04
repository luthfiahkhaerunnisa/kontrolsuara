#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11);
String perintah;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop() {
  while (BT.available()) {
  delay(10);
  char c = BT.read();
  perintah += c;
}
  if(perintah.length() > 0) {
  Serial.println(perintah);
      
  // perintah dibawah ini sesuaikan dengan kebutuhan masing-masing, misalnya:
  if (perintah == "hidupkan lampu kamar tidur")
 { digitalWrite(2, HIGH); }
  else if(perintah == "matikan lampu kamar tidur")
 { digitalWrite(2, LOW); }
  else if(perintah == "hidupkan lampu kamar mandi")
 { digitalWrite(3, HIGH); }
  else if(perintah == "matikan lampu kamar mandi")
 { digitalWrite(3, LOW); }
  else if(perintah == "hidupkan kipas angin")
 { digitalWrite(4, HIGH); }
  else if(perintah == "matikan kipas angin")
 { digitalWrite(4, LOW); }
  else if(perintah == "hidupkan komputer")
 { digitalWrite(5, HIGH); }
  else if(perintah == "matikan komputer")
 { digitalWrite(5, LOW); }
  else if(perintah == "hidupkan semua")
 { digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH); }
  else if(perintah == "matikan semua")
 { digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW); }
perintah="";}}
