#include "raspi_NeoPixel.h"
#include "pigpiod_if2.h"
using namespace std;
#define NUM_LEDS 3

int main(){
    int pi = pigpio_start("192.168.8.157", NULL);
    WS2812BControl led(pi, 18, NUM_LEDS);
    for (size_t i = 0; i < NUM_LEDS; i++)
    {
        led.setColor(i, 50, 124, 25);
    }
    
    while (true)
    {
        led.show();
    }
    
}