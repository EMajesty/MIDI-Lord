#pragma once

#include <Keypad.h>
#include <MIDI.h>
// #include <StreamUtils.h>
#include <ArduinoJson.h>

MIDI_CREATE_DEFAULT_INSTANCE();

bool progMode = 0;
DynamicJsonDocument doc(2048);
char json[] = "{\"presets\":{}, \"last\":{}}";

class Preset
{
    char name[10];
    
};
class PresetManager
{
public:
    byte currPreset;
    byte currBank;
    byte msgCount;
    byte pcNum;
    byte pcChan;

    void initPresets();
    byte getCurrPreset();
    byte getCurrBank();
    void presetChange(Key key);
    void bankChange(Key key);
};