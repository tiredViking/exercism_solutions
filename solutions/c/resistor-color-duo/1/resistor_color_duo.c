#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t bands[]){
    uint16_t tens = (uint16_t)bands[0];
    uint16_t ones = (uint16_t)bands[1];

    return (tens*10) + ones;
}