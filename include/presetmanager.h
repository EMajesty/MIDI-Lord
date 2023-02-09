#pragma once

#include <vector>
#include "bank.h"

class PresetManager
{
public:
    PresetManager();
    ~PresetManager();

private:
    Bank _banks[99];
};
