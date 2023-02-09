#pragma once

#include <vector>
#include "preset.h"

class PresetManager
{
public:
    PresetManager(/* args */);
    ~PresetManager();

private:
    std::vector<Preset> _presets;
};

PresetManager::PresetManager(/* args */)
{
}

PresetManager::~PresetManager()
{
}
