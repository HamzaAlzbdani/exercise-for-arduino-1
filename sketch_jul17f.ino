
#define LED 13 
#define BUTTON 7     // THE INPUT PIN WHERE THE PUSHBUTTON IS CONNECTED

int val = 0;        // val will be used to store the state of the input pin 



void setup() 
{
 pinMode (LED, OUTPUT);       // tell arduino LED is an output
 Serial.begin(9600);
}

void loop() 
{
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(50);
  
}
