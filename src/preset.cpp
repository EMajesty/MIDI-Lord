#include "preset.h"

Preset::Preset()
{
}

Preset::~Preset()
{
}

void Preset::setName(String name)
{
    _name = name;
}

String Preset::getName()
{
    return _name;
}

void Preset::addMessage(Message msg)
{
    _messages.push_back(msg);
}

std::vector<Message> Preset::getMessages()
{
    return _messages;
}

void Preset::clearMessages()
{
    _messages.clear();
}

void Preset::removeMessage(byte messageNumber)
{
    _messages.erase(_messages.begin() + messageNumber);
}