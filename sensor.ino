int inpin=52;
int val;

void setup() {
    Serial.begin(9600);
    pinMode(inpin, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    val = digitalRead(inpin);
    Serial.println(val);
    if (val == LOW) {
        digitalWrite(LED_BUILTIN, LOW);
    } else {
        digitalWrite(LED_BUILTIN, HIGH);
    }
    delay(100);

}

// // the setup function runs once when you press reset or power the board
// void setup() {
//     Serial.begin(9600);
//     // initialize digital pin LED_BUILTIN as an output.
//     pinMode(LED_BUILTIN, OUTPUT);
// }

// // the loop function runs over and over again forever
// void loop() {
//     Serial.println("test");
//     digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//     delay(500);                       // wait for a second
//     digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//     delay(500);                       // wait for a second
// }
