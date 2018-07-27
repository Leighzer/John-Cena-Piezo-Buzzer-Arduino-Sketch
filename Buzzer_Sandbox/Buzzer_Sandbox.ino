//By Leighton Covington
//This is a sketch that uses a piezo buzzer that is connected to the 12 pin then the ground pin of the arduino
//Having a resistor in series in the circuit is optional, including one will reduce the volume of your buzzer, which is a terrbile idea


#define buzzer 12

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzer, 392);
  delay(400);
  tone(buzzer, 440);
  delay(230);
  tone(buzzer, 349);
  delay(250);
  
  noTone(buzzer);
  delay(50);
  
  tone(buzzer, 392);
  delay(2000);

  noTone(buzzer);
  delay(500);
  
  tone(buzzer, 466);
  delay(400);
  tone(buzzer, 440);
  delay(230);
  tone(buzzer, 349);
  delay(250);

  noTone(buzzer);
  delay(50);
  
  tone(buzzer, 392);
  delay(2000);

  noTone(buzzer);
  delay(500);
  
}
