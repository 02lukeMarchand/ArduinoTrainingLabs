/* Programmer: Luke
   Date: 11.6.19
   Program: Blink

   This Program will turn on an LED for a specified amount of time,
   turn it off, and back on in a While Loop

   Merged on 12.2.19
   
   Programmer: Luke
   Date: 11.14.19
   Program: DigitalRead() and the Serial Port

   This Program will turn on an LED for a specified amount of time,
   turn it off, and back on in a While Loop

*/

// Initialize our led to Pin 13
int led = 13;

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  // Using the Function pinMode to call the variable led and provide Output
  pinMode(led, OUTPUT);
  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(2000);


  //read the input pin
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  delay(250); //delay in between readings for stability
}
