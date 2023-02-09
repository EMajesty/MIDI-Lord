#include "message.h"

Message::Message(/* args */)
{
}

Message::~Message()
{
}

void Message::setChannel(byte channel)
{
    _channel = channel;
}

byte Message::getChannel()
{
    return _channel;
}

void PcMessage::setProgramNumber(byte programNumber)
{
    _programNumber = programNumber;
}

byte PcMessage::getProgramNumber()
{
    return _programNumber;
}

void CcMessage::setControlNumber(byte controlNumber)
{
    _controlNumber = controlNumber;
}

byte CcMessage::getControlNumber()
{
    return _controlNumber;
}

void CcMessage::setControlValue(byte controlValue)
{
    _controlValue = controlValue;
}

byte CcMessage::getControlValue()
{
    return _controlValue;
}