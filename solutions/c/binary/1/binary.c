#include "binary.h"

int convert(const char *input){
    // char input[] = {'0', '\0'};
    
    int result = 0;
    int string_len = strlen(input); // without '\0'; actual number of characters in the string
    int power_index = string_len - 1; // starting from the leftmost number

    for (int i = 0; i < string_len; i++){
        if (input[i] < '0' || input[i] > '1') return -1;
        else{
        int integer = input[i] - '0'; // converts 0 or 1 from char to int
        int next_digit = integer * pow(2, power_index);
        result += next_digit;
        power_index--;
        }
    }
    return result;
    
}