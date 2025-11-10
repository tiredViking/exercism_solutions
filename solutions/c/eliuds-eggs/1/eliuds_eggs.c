#include "eliuds_eggs.h"

int egg_count(int decimal){
    // convert decimal to binary
    int egg_total = 0;
    if (decimal == 0) return 0;
    else {
        while (decimal != 0){
        int digit = decimal % 2;
            if (digit == 1) {
                egg_total++;
                decimal /= 2;
            }
            else decimal /= 2;
        }
    }
    return egg_total;
}
