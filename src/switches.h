#include <Arduino.h>
#include <Keypad.h>

const byte rows = 2;
const byte cols = 4;
char keys[rows][cols] = {
    {'4','5','6','-'},
    {'1','2','3','+'}
};
byte rowPins[] = {2,3};
byte colPins[] = {4,5,6,7};
Keypad footswitches = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);