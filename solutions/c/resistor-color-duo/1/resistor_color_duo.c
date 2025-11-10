#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t colors[]){

    char full[3]; 
    sprintf(full, "%d", colors[0]);
    char second_digit[2]; 
    sprintf(second_digit, "%d", colors[1]);
    strcat(full, second_digit);
    
    uint16_t final_code;
    sscanf(full, "%hu", &final_code);
    return final_code;

}