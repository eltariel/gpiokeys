#ifndef __GPIOKEY_H
#define __GPIOKEY_H

#include <stdint.h>
#include <Bounce.h>

#include <core_pins.h>  // Need to find where INPUT_PULLUP should be included from

class GPIOKey
{
public:
    GPIOKey(uint8_t pin, uint16_t key, uint8_t pin_mode = INPUT_PULLUP, unsigned long bounce_time = 10);
    void init();
    void update();

private:
    Bounce button;

    uint8_t pin_number;
    uint16_t key_code;
    uint8_t pin_mode;
    unsigned long bounce_time;
};

#endif