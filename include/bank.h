#pragma once

#include "preset.h"

class Bank
{
public:
    Bank();
    ~Bank();
    Preset getPreset(byte presetNumber);
    void addPreset(byte presetNumber, Preset preset);
    void removePreset(byte presetNumber);

private:
    Preset _presets[6];
};
