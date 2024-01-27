const int buttonPin = 47;
const int buttonPin2 = 44;  // the number of the pushbutton pin

// variables will change:
int buttonState = 0;
int oldButtonState = LOW;
int value = 0;

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  //pinMode(buttonPin2, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != oldButtonState && buttonState == HIGH) {
    value = (value == 0 ? 1 : 0);
    Serial.println(value);
      Serial.println();  // Output the current value to the Serial Monitor (optional)
    delay(50);
  }

  oldButtonState = buttonState;


  delay(50);
}