#include "hamming.h"

int compute(const char *lhs, const char *rhs){
    int count_lhs = 0;
    int count_rhs = 0; 
    int hamming = 0;

    while (lhs[count_lhs] != '\0') ++count_lhs;
    while (rhs[count_rhs] != '\0') ++count_rhs;

    if (count_lhs != count_rhs) return -1;
    if ((lhs[0] == '\0') || rhs[0] == '\0') return 0;
    else{
        for (int count = 0; count < count_lhs + 1; count++){
            if (lhs[count] != rhs[count]) hamming += 1;
            else continue;
        }
    }
    
    return hamming;

}