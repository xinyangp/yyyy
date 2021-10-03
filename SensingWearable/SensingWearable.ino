
int led1 = 9;
int led2 = 6;


int sensorPin = 10;
int ANALOG_THRESHOLD = 100;
int val = 0;
//int inputVal = 0;
//int outputVal = 0;
int mode=0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT); 

}

// the loop function runs over and over again forever
void loop() {
  char LED= Serial.read();
  

   if (LED=="A")
     mode=0;
   else if (LED=="B")
     mode=1;
   else if (LED=="C")
     mode=2;



    
    val = analogRead(sensorPin);
    control();
    
    }
//  inputVal = analogRead(sensorPin);// read the value from lightsenor
//  outputVal = map(inputVal, 0, 1023, 0, 255); //Convert from 0-1023 proportional to the number of a number of from 0 to 255
//  analogWrite(led1,255-outputVal); // turn on the led depending on the output value
//  analogWrite(led2,255-outputVal); // turn on the led depending on the output value



void control(){
  
  if((mode==0)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led1,255);
    
    }

    else  {analogWrite(led1,0);

    }
  if((mode==1)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led1,90);
  }
      else  {analogWrite(led1,0);
    }
  if((mode==2)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led1,val);}
      else{ analogWrite(led1,0);
    }




  if((mode==0)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led2,255);}

    else  {analogWrite(led2,0);

    }
  if((mode==1)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led2,90);
  }
      else  {analogWrite(led2,0);
    }
  if((mode==2)&&(val<ANALOG_THRESHOLD)){
    analogWrite(led2,val);}
      else{ analogWrite(led2,0);
    }
  
  
  
  }
