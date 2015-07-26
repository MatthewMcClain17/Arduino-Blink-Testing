// Testing Arduino sketch writing on GitHub

const int ledPin = 13;
const int delay = 1000;

void setup() {
	pinMode(ledPin, OUTPUT);
}

void loop() {
	digitalWrite(ledPin, HIGH);
	delay(delay);
	digitalWrite(ledPin, LOW);
	delay(delay);
}
