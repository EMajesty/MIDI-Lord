#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <MIDI.h>
// #include "core.h"
// #include "lcd.h"
// #include "switches.h"

LiquidCrystal_I2C lcd(0x27, 20, 4);
//MIDI_CREATE_DEFAULT_INSTANCE();
// PresetManager pm;

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Ywrobot Arduino!");
   lcd.setCursor(0,2);
  lcd.print("Arduino LCM IIC 2004");
   lcd.setCursor(2,3);
  lcd.print("Power By Ec-yuan!");
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