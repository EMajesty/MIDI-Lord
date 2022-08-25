#include <Arduino.h>
//#include <MIDI.h>

#include "switches.h"

//MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
    Serial.begin(9600);
    footswitches.addEventListener(keypadEvent);

    //MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages
    
    // Read preset json from EEPROM
    // Get last active bank and preset from EEPROM
}

void loop()
{
    // Screen
    // Input
    // Preset
}