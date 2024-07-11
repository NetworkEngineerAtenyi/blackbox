//constants
const int ledPowerPin1 = 13;
const int ledPowerPin2 = 25;
const int ledPowerPin3 = 27;

void setup() {
  // put your setup code here, to run once:
   pinMode(ledPowerPin1,OUTPUT);
   pinMode(ledPowerPin2,OUTPUT);
   pinMode(ledPowerPin3,OUTPUT);
   Serial.begin(115200);
   Serial.println("OTIM JUSTINE AROP ");
   
}

void loop() {
  //Ledlight One
  digitalWrite(ledPowerPin1,HIGH);
  Serial.println("Ledlight One ON");
  delay(1000);
  digitalWrite(ledPowerPin1,LOW);
  Serial.println("Ledlight One OFF");
  delay(1000);

  //Ledlight Two
  digitalWrite(ledPowerPin2,HIGH);
  Serial.println("Ledlight Two ON");
  delay(1000);
  digitalWrite(ledPowerPin2,LOW);
  Serial.println("Ledlight Two OFF");
  delay(1000);

  //Ledlight Three
  digitalWrite(ledPowerPin3,HIGH);
  Serial.println("Ledlight Three ON");
  delay(1000);
  digitalWrite(ledPowerPin3,LOW);
  Serial.println("Ledlight Three OFF");
  delay(1000);


}
