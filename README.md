# Mp3_Music_Player_On_Esp32

Mp3 player with ESP32 using DAC using SSD1306 screen combined with buttons to select songs (mp3 files are saved in SD card) and turn on/off music. Use code to translate mp3 files so that the chip can process. Music will be played through the speaker with the support of LM386 amplifier. Volume adjustment will use potentiometer.

## Runs on esp-idf
* v4.2
## Use pull up resistors for sd card pins
* MISO 2
* MOSI 15
* CLK  14
* CS   GPIO_NUM_13
## When starting the screen will be black for a few seconds to load data for oled
* Demo: https://youtube.com/shorts/p5b11d6myJc?feature=share
![IMG_2520](https://github.com/td2510/Mp3_Music_Player_On_Esp32/assets/111385453/ef743073-ae10-40ba-9718-bb2257e6bddf)
