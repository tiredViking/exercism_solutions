#include "grains.h"

uint64_t square(uint8_t index){
    uint64_t current_square = 0;
    if (index == 0 || index > 64) return 0;
    else if (index == 1) return 1;
    else {
        current_square = 1;
        for (uint8_t i = 2; i <= index; i++){
            current_square *= 2;
        }
    }
    return current_square;
}


uint64_t total(void){
    uint64_t total = 0;
    uint64_t grains = 1;

    for (int i = 0; i < 64; i++) {
        total += grains;
        grains *= 2;
    }
    return total;
}