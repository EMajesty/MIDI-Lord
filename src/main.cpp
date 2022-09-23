#include <Arduino.h>
#include <Wire.h>
#include <LiquidTWI2.h>
//#include <MIDI.h>

//#include "switches.h"

LiquidTWI2 lcd(0x3F);

// MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
    Serial.begin(9600);
    // footswitches.addEventListener(keypadEvent);
    // MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages
    lcd.setMCPType(LTI_TYPE_MCP23008);
    lcd.begin(20,4);
    lcd.print("Hello");
    pinMode(PC13, OUTPUT); // LED connect to pin PC13
    // Read preset json from flash
    // Get last active bank and preset from flash
}

void loop()
{
    lcd.setCursor(0, 1);
    lcd.print(millis()/1000);
    lcd.setBacklight(HIGH);
    digitalWrite(PC13, HIGH);
    delay(500);
    lcd.setBacklight(LOW);
    digitalWrite(PC13, LOW);
    delay(500);
    // Screen
    // Input
    // Preset
}