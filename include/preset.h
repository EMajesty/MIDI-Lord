#pragma once

#include <Arduino.h>
#include <vector>
#include "message.h"

class Preset
{
private:
    String _name;
    std::vector<Message> _messages;

public:
    Preset();
    ~Preset();
    void setName(String name);
    String getName();
    void addMessage(Message message);
    std::vector<Message> getMessages();
    void clearMessages();
    void removeMessage(byte messageNumber);
};
