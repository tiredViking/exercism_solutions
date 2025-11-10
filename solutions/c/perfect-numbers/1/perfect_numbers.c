#include "perfect_numbers.h"

int classify_number(int number){
    if (number <= 0) return -1;
    else {
    int aliquot_sum = 0;
    for (int i = 1; i < number; i++){
        if (number % i == 0) aliquot_sum += i;
        else continue;
    }
    if (number < aliquot_sum) return ABUNDANT_NUMBER;
    else if (number > aliquot_sum) return DEFICIENT_NUMBER;
    else return PERFECT_NUMBER;
    }
}
