#include <NewPing.h>



#define SONAR_NUM  2 // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     7  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define TRIGGER_PIN2  4 // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN2     5  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200

NewPing sonar[SONAR_NUM] ={
  NewPing(6, 7, MAX_DISTANCE),
  NewPing(4, 5, MAX_DISTANCE),
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  Serial.print(sonar[0].ping_cm()); 
  Serial.print(", ");   
    Serial.print(sonar[1].ping_cm()); 
    Serial.println();     
}
