
int led1 = 12;
int led2 = 6;


int sensorPin = 10;
int ANALOG_THRESHOLD = 100;
int val = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 

}

// the loop function runs over and over again forever
void loop() {
  val = analogRead(sensorPin);

//night
  if (val<ANALOG_THRESHOLD)
    digitalWrite(led1, HIGH);
  else
    digitalWrite(led1, LOW);


  if (val<ANALOG_THRESHOLD)
    digitalWrite(led2, HIGH);
  else
    digitalWrite(led2, LOW);





   
                       
}
