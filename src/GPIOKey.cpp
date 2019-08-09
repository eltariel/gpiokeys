#include <usb_keyboard.h>
#include <GPIOKey.h>

GPIOKey::GPIOKey(uint8_t p, uint16_t k, uint8_t m, unsigned long b)
    : button(p, b),
      pin_number(p),
      key_code (k),
      pin_mode (m),
      bounce_time(b)
{
}

void GPIOKey::init()
{
    pinMode(pin_number, INPUT_PULLUP);
}

void GPIOKey::update()
{
    button.update();
    if(button.risingEdge())
    {
        Keyboard.press(key_code);
    }

    if(button.fallingEdge())
    {
        Keyboard.release(key_code);
    }
}
