#include "bank.h"

Bank::Bank()
{
}

Bank::~Bank()
{
}

Preset Bank::getPreset(byte presetNumber)
{
    return _presets[presetNumber];
}

void Bank::addPreset(byte presetNumber, Preset preset)
{
    _presets[presetNumber] = preset;
}

void Bank::removePreset(byte presetNumber)
{
    _presets[presetNumber] = NULL;
}