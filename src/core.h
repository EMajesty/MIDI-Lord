#include <Keypad.h>
#include <MIDI.h>
#include <EEPROM.h>
#include <StreamUtils.h>
#include <ArduinoJson.h>

MIDI_CREATE_DEFAULT_INSTANCE();

byte pcNum, pcChan, msgCount;
bool progMode = 0;
DynamicJsonDocument presets(2048);
char json[] = "{\"presets\":{}, \"last\":{}}";

void presetChange(Key key);
void bankChange(Key key);