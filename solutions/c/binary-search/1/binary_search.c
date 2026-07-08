#include "binary_search.h"

const int *binary_search(int value, const int *arr, size_t length){
   if (arr == NULL || length == 0 || value < arr[0]) {
        return NULL; 
    }
    
    size_t lower_bound = 0;
    size_t upper_bound = length-1;
    
    while (lower_bound <= upper_bound) {
        size_t mid_index = lower_bound + (upper_bound - lower_bound) / 2;
        int mid_value = arr[mid_index];
        if (value == mid_value) return &arr[mid_index];

        else if (value < mid_value) {
            upper_bound = mid_index - 1;
        }

        else {
            lower_bound = mid_index + 1;
        }
    }
    return 0;
}