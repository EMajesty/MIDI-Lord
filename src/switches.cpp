#include "switches.h"
#include "core.h"

void keypadEvent(KeypadEvent key)
{
    switch (footswitches.getState())
    {
    case PRESSED:
        if (progMode = 0)
        {
            if (key < 7)
            {
                presetChange(key);
            }
            else
            {
                bankChange(key);
            }
        }
        else if (progMode = 1)
        {
            /* code */
        }

        break;
    case RELEASED:
        break;
    case HOLD:
    if (progMode = 0)
    {
        if (footswitches.getKeys() == '7','8') // Holding the '+' and '-' buttons simultaneously activates programming mode
        {
            progMode = 1;
        }
    }
        break;
    default:
        break;
    }
}