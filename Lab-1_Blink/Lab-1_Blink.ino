/* Programmer: Luke
   Date: 11.14.19
   Program: DigitalRead() and the Serial Port

   This Program will turn on an LED for a specified amount of time,
   turn it off, and back on in a While Loop
*/

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);
  
}

void loop() {
  //read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  delay(250); //delay in between readings for stability
  
}
