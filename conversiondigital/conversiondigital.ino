int analogPin =A0;
int SalidaPin= 13;
int val=0;

void setup() {
 pinMode(SalidaPin, OUTPUT);
 Serial.begin(9600);
 Serial.println("Arduino inicializado");
}

void loop() {
  val = analogRead(analogPin); // read the input pin
  Serial.println(val); //debug value
  delay(2000); //delay

  if (val > 500){
    Serial.println("valor de entrada mayor a 500");
    digitalWrite(SalidaPin,HIGH);
  }
  else{
    Serial.println("valor de entrada mayor a 500");
    digitalWrite(SalidaPin,LOW);
  }
} 
