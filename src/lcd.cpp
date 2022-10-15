#include "lcd.h"

#define COLUMNS 20
#define ROWS 4

#define CPT1 0, 0
#define CPT2 5, 0
#define CPT3 10, 0
#define CPT4 0, 3
#define CPT5 5, 3
#define CPT6 10, 3

#define CBP 15, 0
#define CBM 15, 3

#define CBANK 0, 1
#define CPRESET 0, 2
#define CNAME 10, 2

bool progMode = 0;
int currPreset = 5, lastPreset = 2;

LiquidCrystal_I2C lcd(PCF8574_ADDR_A21_A11_A01, 4, 5, 6, 16, 11, 12, 13, 14, POSITIVE);

void initScreen()
{
    lcd.begin(COLUMNS, ROWS);
}

void drawScreen()
{

    if (!progMode)
    {
        if (currPreset != lastPreset)
        {
            lcd.clear();

            lcd.setCursor(CPT1);
            if (currPreset == 1)
            {
                lcd.print("| 1 |");
            } else {
                lcd.print("  1  ");
            }

            lcd.setCursor(CPT2);
            if (currPreset == 2)
            {
                lcd.print("| 2 |");
            } else {
                lcd.print("  2  ");
            }

            lcd.setCursor(CPT3);
            if (currPreset == 3)
            {
                lcd.print("| 3 |");
            } else {
                lcd.print("  3  ");
            }

            lcd.setCursor(CBP);
            lcd.print("| + |");

            lcd.setCursor(CBANK);
            lcd.print("Bank x");
            lcd.setCursor(CPRESET);
            lcd.print("Preset x: ");
            lcd.setCursor(CNAME);
            lcd.print("ass");

            lcd.setCursor(CPT4);
            if (currPreset == 4)
            {
                lcd.print("| 4 |");
            } else {
                lcd.print("  4  ");
            }

            lcd.setCursor(CPT5);
            if (currPreset == 5)
            {
                lcd.print("| 5 |");
            } else {
                lcd.print("  5  ");
            }

            lcd.setCursor(CPT6);
            if (currPreset == 6)
            {
                lcd.print("| 6 |");
            } else {
                lcd.print("  6  ");
            }
            lcd.setCursor(CBM);
            lcd.print("| - |");
        }
    }
    else
    {
    }
}