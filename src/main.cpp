#include <Arduino.h>
//#include <MIDI.h>

#include "lcd.h"
//#include "switches.h"

// MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
  Serial.begin(9600);
  initScreen();
  drawScreen();
  // footswitches.addEventListener(keypadEvent);
  // MIDI.begin(MIDI_CHANNEL_OMNI);  // Listen to all incoming messages

  // Read preset json from flash
  // Get last active bank and preset from flash
}

void loop()
{
  
  // Screen
  // Input
  // Preset
}