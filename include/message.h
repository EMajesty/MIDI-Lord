#pragma once

#include <Arduino.h>

class Message
{
public:
    Message();
    ~Message();
    void setChannel(byte channel);
    byte getChannel();

private:
protected:
    byte _channel;
};

class PcMessage : Message
{
public:
    void setProgramNumber(byte programNumber);
    byte getProgramNumber();

private:
    byte _programNumber;
};

class CcMessage : Message
{
public:
    void setControlNumber(byte controlNumber);
    byte getControlNumber();
    void setControlValue(byte controlNumber);
    byte getControlValue();

private:
    byte _controlNumber;
    byte _controlValue;
};