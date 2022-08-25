#include <Arduino.h>
#include <Keypad.h>

const uint8_t rows = 2;
const uint8_t cols = 4;
char keys[rows][cols] = {
    {'2','4','6','8'},
    {'1','3','5','7'}
};
uint8_t rowPins[] = {2,3};
uint8_t colPins[] = {4,5,6,7};

Keypad footswitches = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

void keypadEvent(KeypadEvent key);