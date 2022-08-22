# MIDI Lord

![sketch](img/midilord.jpg "MIDI Lord sketch")

### Stuff

- Presets are stored in EEPROM as serialized json
  - Write all presets every time?
  - `EEPROM.h`, `StreamUtils.h`
  - `serializeJson()` and `deserializeJson()`
  - `StreamUtils` provides the `EepromStream` class
  - Json formatted with midi library in mind
- LCD handled by the `LiquidCrystal` library
- Footswitches handled by the `Keypad` library


### BOM

| Part | Type | Qty |
| --- | --- |:---:|
| Enclosure | 1590DD | 1 |
| Footswitches | SPST momentary | 6 |
| MIDI connector | Panel DIN | 1 |
| DC jack | 5.5x2.1mm | 1 |
| Arduino | Pro Micro | 1 |
| LCD | I2C | 1 |