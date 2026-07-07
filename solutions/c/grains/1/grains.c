#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index){
    return (index < 1 || index > 64) ? 0 : 1ULL << (index - 1);
}

uint64_t total(void){
    return (uint64_t)-1;
}