#include "collatz_conjecture.h"

int steps(int start){
    if (start <= 0) return ERROR_VALUE;
    int steps = 0;
    int current_number = start;
    while (current_number != 1) {
        if (current_number % 2 == 0) {
            steps += 1;
            current_number /= 2;
        }
        else {
            steps += 1;
            current_number = current_number * 3 + 1;
        }
    }    
    return steps;
}