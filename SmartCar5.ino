int led = 10;                // the pin that the LED is atteched to

int sensor = A0;              // the pin that the sensor is atteched to

int state = HIGH;             // by default, no motion detected

int val = 0;                 // variable to store the sensor status (value)




int ledA = 11;                // the pin that the LED is atteched to

int sensorA = A1;              // the pin that the sensor is atteched to

int stateA = HIGH;             // by default, no motion detected

int valA = 0;


int ledB = 12;                // the pin that the LED is atteched to

int sensorB = A2;              // the pin that the sensor is atteched to

int stateB = HIGH;             // by default, no motion detected

int valB = 0;                 // variable to store the sensor status (value)


int ledC = 13;                // the pin that the LED is atteched to

int sensorC = A3;              // the pin that the sensor is atteched to

int stateC = HIGH;             // by default, no motion detected

int valC = 0;                 // variable to store the sensor status (value)

 

void setup() {

  pinMode(led, OUTPUT);      // initalize LED as an output

  pinMode(sensor, INPUT);    // initialize sensor as an input

  Serial.begin(115200);        // initialize serial

  

  pinMode(ledA, OUTPUT);      // initalize LED as an output

  pinMode(sensorA, INPUT);    // initialize sensor as an input

  Serial.begin(115200);        // initialize serial


  pinMode(ledB, OUTPUT);      // initalize LED as an output

  pinMode(sensorB, INPUT);    // initialize sensor as an input

  Serial.begin(115200);        // initialize serial


  pinMode(ledC, OUTPUT);      // initalize LED as an output

  pinMode(sensorC, INPUT);    // initialize sensor as an input

  Serial.begin(115200);        // initialize serial

}

 

void loop(){

  val = digitalRead(sensor);   // read sensor value

  if (val == LOW) {           // check if the sensor is LOW 

    digitalWrite(led, HIGH);   // turn LED OFF

    delay(100);                // delay 100 milliseconds 

    

    if (state == HIGH) {

      Serial.println(" Warning Detect "); 

       Serial.println(""); 

      state = LOW;       // update variable state to C

    }

  } 

  else {

      digitalWrite(led, LOW); // turn LED ON

      delay(200);             // delay 200 milliseconds 

      

      if (state == LOW){

        Serial.println("Clear OK");

        Serial.println("");

        

        state = HIGH;       // update variable state to HIGH

    }

  }


   valA = digitalRead(sensorA);   // read sensor value

  if (valA == LOW) {           // check if the sensor is LOW 

    digitalWrite(ledA, HIGH);   // turn LED OFF

    delay(100);                // delay 100 milliseconds 

    

    if (stateA == HIGH) {

      Serial.println(" Warning Detect "); 

       Serial.println(""); 

      stateA = LOW;       // update variable state to C

    }

  } 

  else {

      digitalWrite(ledA, LOW); // turn LED ON

      delay(200);             // delay 200 milliseconds 

      

      if (stateA == LOW){

        Serial.println("Clear OK");

        Serial.println("");

        

        stateA = HIGH;       // update variable state to HIGH

    }

  }



  valB = digitalRead(sensorB);   // read sensor value

  if (valB == LOW) {           // check if the sensor is LOW 

    digitalWrite(ledB, HIGH);   // turn LED OFF

    delay(100);                // delay 100 milliseconds 

    

    if (stateB == HIGH) {

      Serial.println(" Warning Detect "); 

       Serial.println(""); 

      stateB = LOW;       // update variable state to C

    }

  } 

  else {

      digitalWrite(ledB, LOW); // turn LED ON

      delay(200);             // delay 200 milliseconds 

      

      if (stateB == LOW){

        Serial.println("Clear OK");

        Serial.println("");

        

        stateB = HIGH;       // update variable state to HIGH

    }

  }



  valC = digitalRead(sensorC);   // read sensor value

  if (valC == LOW) {           // check if the sensor is LOW 

    digitalWrite(ledC, HIGH);   // turn LED OFF

    delay(100);                // delay 100 milliseconds 

    

    if (stateC == HIGH) {

      Serial.println(" Warning Detect "); 

       Serial.println(""); 

      stateC = LOW;       // update variable state to C

    }

  } 

  else {

      digitalWrite(ledC, LOW); // turn LED ON

      delay(200);             // delay 200 milliseconds 

      

      if (stateC == LOW){

        Serial.println("Clear OK");

        Serial.println("");

        

        stateC = HIGH;       // update variable state to HIGH

    }

  }

}
     
