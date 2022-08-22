#include <Arduino.h>
#include <Keypad.h>
#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
    MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages
    // Read preset json from EEPROM
    // Get last active bank and preset from EEPROM
}

void loop()
{
    // Screen
    // Input
    // Preset
}