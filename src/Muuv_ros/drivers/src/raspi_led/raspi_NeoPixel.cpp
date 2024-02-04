#include "raspi_NeoPixel.h"

WS2812BControl::WS2812BControl(int pigpio_id, int pin, int num_leds)
    : pi_(pigpio_id), num_leds_(num_leds), buffer_(num_leds_ * 24), pin_(pin)
{
  if (pi_ < 0)
  {
    cout << "pigpio failed to start" << endl;
  }
  set_mode(pi_, pin_, PI_OUTPUT);
}

WS2812BControl::~WS2812BControl()
{
  cout << "Shutting down" << endl;
}

void WS2812BControl::setColor(int index, int red, int green, int blue)
{
  if (index < 0 || index >= num_leds_)
  {
    return; // Invalid LED index
  }

  gpioPulse_t *pixel = &buffer_[index * 24];

  buildBitSequence(static_cast<unsigned char>(green), pixel);
  buildBitSequence(static_cast<unsigned char>(red), pixel + 8);
  buildBitSequence(static_cast<unsigned char>(blue), pixel + 16);
}

void WS2812BControl::show()
{
  wave_clear(pi_);
  wave_add_generic(pi_, buffer_.size(), buffer_.data());

  int waveId = wave_create(pi_);

  if (waveId >= 0)
  {
    wave_send_using_mode(pi_, waveId, PI_WAVE_MODE_ONE_SHOT);
    while (wave_tx_busy(pi_) == 1)
    {
      time_sleep(0.01);
    }
    wave_delete(pi_, waveId);
  }
}

void WS2812BControl::buildBitSequence(unsigned char value, gpioPulse_t *sequence)
{
  for (int i = 7; i >= 0; i--)
  {
    if (value & (1 << i))
    {
      // Bit is 1
      sequence[i].gpioOn = 1; // 1 bit
      sequence[i].gpioOff = 0;
      sequence[i].usDelay = 6;
    }
    else
    {
      // Bit is 0
      sequence[i].gpioOn = 0; // 0 bit
      sequence[i].gpioOff = 1;
      sequence[i].usDelay = 6;
    }
  }
}
