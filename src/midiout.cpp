#include <Arduino.h>
#include <MIDI.h>
#include "preset.h"

// Midi message has channel, CC number and CC value

MIDI_CREATE_DEFAULT_INSTANCE();


void presetChange(Preset preset)
{
    for (int i = 0; i < preset.messageCount; i++)
    {
            // Send message i
            MIDI.sendProgramChange(preset.pcNumber, preset.pcChannel);
    };
};