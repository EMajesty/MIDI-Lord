// #include "switches.h"
// #include "core.h"

// void keypadEvent(KeypadEvent key)
// {
//     switch (footswitches.getState())
//     {
//     case PRESSED:
//         if (progMode = 0)
//         {
//             if (key < 7)
//             {
//                 presetChange(key);
//             }
//             else
//             {
//                 bankChange(key);
//             }
//         }
//         else if (progMode = 1)
//         {
//             /* code */
//         }

//         break;
//     case RELEASED:
//         break;
//     case HOLD:
//         if (footswitches.getKeys() == '7', '8') // Holding the '+' and '-' buttons simultaneously activates programming mode
//         {
//             if (progMode = 0)
//             {
//                 progMode = 1;
//             }
//             else
//             {
//                 progMode = 0;
//             }
//         }
//         break;
//     default:
//         break;
//     }
// }