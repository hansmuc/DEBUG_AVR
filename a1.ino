#include <Arduino.h>
#include <app_api.h>
#include <avr8-stub.h>

int globalCounter = 0;

int zaehler = 0;
#define rot 2
#define gelb 3
#define gruen 4

// the setup function runs once when you press reset or power the board
void setup() {

	debug_init(); // initialize the debugger

	// initialize digital pin LED_BUILTIN as an output.
	pinMode(rot, OUTPUT);

	// the loo, OUTPUT);
	pinMode(gelb, OUTPUT);
	pinMode(gruen, OUTPUT); // function runs over and over again forever
}int g = 222;
void loop() {

	for (int i = 2; i <= 4; i++) {

		digitalWrite(i, HIGH);
		if (i == 3) {
			delay(100);
		} else
			delay(1000);
		digitalWrite(i, LOW); // turn the LED off by making the voltage LOW
		if (i == 3)
			delay(100);
		else
			delay(1000);
	}
}
