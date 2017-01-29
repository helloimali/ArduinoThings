
//turning light on and off
int lightPin = 9; // pin 9

void setup(){
pinMode(lightPin, OUTPUT);
}

void loop(){
  digitalWrite(lightPin, HIGH); //turns light on ...
  delay(1000); // ...for 1 second
  digitalWrite(lightPin,LOW); //turns light off ...
  delay(1000); // for 1 second
  // Digital is just LOW and HIGH (off and on)
  
  analogWrite(lightPin, 255);
  delay(1000);
  // Analog works in like percentages sorta - it's not just on and off
  // it's 0 - 255
  analogWrite(lightPin, 150);
  delay(1000);
  
  analogWrite(lightPin, 0);
  delay(1000);
  
}
