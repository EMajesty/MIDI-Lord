#include "core.h"

void presetChange(Key key)
{
    // Send program changes
    // Get msgCount from json bank = current, preset = key
    // for (byte i = 0; i < msgCount; i++)
    // {
    //     MIDI.sendProgramChange(pcNum, pcChan);
    // }
    // Update last preset to json, lastPreset = key
    // Activate correct LED
    // Update LCD, active = key
};

void bankChange(Key key)
{

};

void test()
{
    deserializeJson(presets, json);
};