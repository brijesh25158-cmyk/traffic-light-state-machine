
int redPin = 13;
int yellowPin = 12;
int greenPin = 11;

void setup() {
  // . Tell the Arduino to send power OUT of these pins
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // --- RED LIGHT ---
  digitalWrite(redPin, HIGH);   // Turn Red ON
  digitalWrite(yellowPin, LOW); // Turn Yellow OFF
  digitalWrite(greenPin, LOW);  // Turn Green OFF
  delay(5000);                  // Wait 5 seconds (5000 milliseconds)

  // --- GREEN LIGHT ---
  digitalWrite(redPin, LOW);    // Turn Red OFF
  digitalWrite(yellowPin, LOW);
  digitalWrite(greenPin, HIGH); // Turn Green ON
  delay(5000);                  // Wait 5 seconds

  // --- YELLOW LIGHT ---
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, HIGH); // Turn Yellow ON
  digitalWrite(greenPin, LOW);   // Turn Green OFF
  delay(2000);                   // Wait 2 seconds
  
  // The loop automatically starts over at the top!
}
