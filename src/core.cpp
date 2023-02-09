#include "core.h"

void PresetManager::initPresets()
{
    doc.clear();
    JsonObject presets = doc.createNestedObject("presets");
}

byte PresetManager::getCurrPreset()
{
    return currPreset;
}

byte PresetManager::getCurrBank()
{
    return currBank;
}

void PresetManager::presetChange(Key key)
{
    // Send program changes
    // Get msgCount from json bank = current, preset = key
    for (byte i = 0; i < msgCount; i++)
    {
        MIDI.sendProgramChange(pcNum, pcChan);
    }
    // Update last preset to json, lastPreset = key
}

void PresetManager::bankChange(Key key)
{
}