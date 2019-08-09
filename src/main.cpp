#include <Arduino.h>

#include <GPIOKey.h>

#define KEY_COUNT 24

GPIOKey keys[KEY_COUNT] = {
    GPIOKey( 0, KEY_A),
    GPIOKey( 1, KEY_B),
    GPIOKey( 2, KEY_C),
    GPIOKey( 3, KEY_D),
    GPIOKey( 4, KEY_E),
    GPIOKey( 5, KEY_F),
    GPIOKey( 6, KEY_G),
    GPIOKey( 7, KEY_H),
    GPIOKey( 8, KEY_I),
    GPIOKey( 9, KEY_J),
    GPIOKey(10, KEY_K),
    GPIOKey(11, KEY_L),
    GPIOKey(12, KEY_M),
    GPIOKey(13, KEY_N),
    GPIOKey(14, KEY_O),
    GPIOKey(15, KEY_P),
    GPIOKey(16, KEY_Q),
    GPIOKey(17, KEY_R),
    GPIOKey(18, KEY_S),
    GPIOKey(19, KEY_T),
    GPIOKey(20, KEY_U),
    GPIOKey(21, KEY_V),
    GPIOKey(22, KEY_W),
    GPIOKey(23, KEY_X),
};

void setup()
{
    for (size_t i = 0; i < KEY_COUNT; ++i)
    {
        keys[i].init();
    }
}

void loop()
{
    for (size_t i = 0; i < KEY_COUNT; ++i)
    {
        keys[i].update();
    }
}