const int buttonPin1 = 45;
const int buttonPin2 = 49;
const int buttonPin3 = 53;

// variables will change:
int buttonState1 = 0;
int oldButtonState1 = LOW;
int value1 = 0;

int buttonState2 = 0;
int oldButtonState2 = LOW;
int value2 = 0;

int buttonState3 = 0;
int oldButtonState3 = LOW;
int value3 = 0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
}

void loop() {

  int sensorValue1 = analogRead(A8);
  int sensorValue2 = analogRead(A9);
  int sensorValue3 = analogRead(A10);
  int sensorValue4 = analogRead(A11);

      buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);

  if (buttonState1 != oldButtonState1 && buttonState1 == HIGH) {
    value1 = (value1 == 0 ? 1 : 0);
  }
  oldButtonState1 = buttonState1;

  if (buttonState2 != oldButtonState2 && buttonState2 == HIGH) {
    value2 = (value2 == 0 ? 1 : 0);
  }
  oldButtonState2 = buttonState2;

  if (buttonState3 != oldButtonState3 && buttonState3 == HIGH) {
    value3 = (value3 == 0 ? 1 : 0);
  }
  oldButtonState3 = buttonState3;


  Serial.print("button1:");
  Serial.print(value1);
  Serial.print(", ");
  Serial.print("button2:");
  Serial.print(value2);
  Serial.print(", ");
  Serial.print("button3:");
  Serial.print(value3);
  Serial.print(", ");
  Serial.print("potentio1:");
  Serial.print(sensorValue1);
  Serial.print(", ");
  Serial.print("potentio2:");
  Serial.print(sensorValue2);
  Serial.print(", ");
  Serial.print("potentio3:");
  Serial.print(sensorValue3);
  Serial.print(", ");
  Serial.print("potentio4:");
  Serial.print(sensorValue4);
  Serial.print(", ");
  Serial.println();


  delay(500);
}