# MIDI Lord

![sketch](img/midilord.png "MIDI Lord")


### Libraries used

- `FlashStorage_STM32` by Khoi Hoang
- `Keypad` by Mark Stanley
- `ArduinoJson` by Benoit Blanchon
- `StreamUtils` by Benoit Blanchon
- `MIDI Library` by fortyseveneffects
- `MIDIUSB` by Gary Grewal
- `LiquidTWI2` by Sam C. Lin


### Parts

| Part | Type | Qty |
| --- | --- |:---:|
| Enclosure | 1590DD | 1 |
| Footswitches | SPST momentary | 8 |
| MIDI connector | Panel DIN | 2 |
| DC jack | 5.5x2.1mm | 1 |
| MCU | Black Pill STM32F401C | 1 |
| LCD | I2C | 1 |
| 6N138 | | 1 |
| USB C to panel cable | | 1 |


### FTDI to STM32

I'm using a ST Link V2 for programming, which has no serial.
To do serial monitoring I'm using an usb to uart interface.

| FTDI | STM32 |
|:---:|:---:|
| GND | GND |
| VCC | 5V |
| RX | A9 |
| TX | A10 |