#include <Arduino.h>
#include <EEPROM.h>
#include <StreamUtils.h>

class Preset
{
private:
    // members
    String name;
    int number;
    int pcNumber;
    int pcChannel;
public:
    // members


    // methods
    Preset();
    Preset(String name, int number);

    ~Preset();
    void write();
};