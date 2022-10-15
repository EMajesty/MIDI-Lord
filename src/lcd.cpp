#include "lcd.h"

#define COLUMNS 20
#define ROWS 4

LiquidCrystal_I2C lcd(PCF8574_ADDR_A21_A11_A01, 4, 5, 6, 16, 11, 12, 13, 14, POSITIVE);

void initScreen(){
    lcd.begin(COLUMNS, ROWS);
}

void drawScreen()
{
    lcd.clear();
    lcd.setCursor(1,1);
    lcd.print("Close the world");
    lcd.setCursor(6,2);
    lcd.print("Open the nExt");
}