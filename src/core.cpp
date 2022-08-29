#include "core.h"

void presetChange(Key key)
{
    for (byte i = 0; i < msgCount; i++)
    {
        MIDI.sendProgramChange(pcNum, pcChan);
    }
};

void bankChange(Key key)
{

};

void test()
{
    deserializeJson(presets, json);
};