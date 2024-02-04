#ifndef RASPI_NEOPIXEL_H
#define RASPI_NEOPIXEL_H

#include <iostream>
#include <pigpiod_if2.h>
#include <vector>
using namespace std;

class WS2812BControl {
public:
    WS2812BControl(int pigpio_id, int pin, int num_leds);
    ~WS2812BControl();

    void setColor(int index, int red, int green, int blue);
    void show();

private:
    int pi_;
    int num_leds_;
    int pin_;
    std::vector<gpioPulse_t> buffer_;

    void buildBitSequence(unsigned char value, gpioPulse_t* sequence);
};

#endif // RASPI_NEOPIXEL_H
