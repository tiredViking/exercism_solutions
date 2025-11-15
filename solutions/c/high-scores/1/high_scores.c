#include "high_scores.h"

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len-1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t highest = scores[0];
    for (size_t i = 0; i < scores_len - 1; i++){
        if (scores[i] > highest) highest = scores[i];
    }
    return highest;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output)
{
    if (scores_len == 0) return 0;

    int32_t output1[scores_len];
    memcpy(output1, scores, scores_len * sizeof(int32_t));

    // Bubble sort 
    for (size_t i = 0; i < scores_len - 1; i++) {
        for (size_t j = 0; j < scores_len - 1 - i; j++) {
            if (output1[j] > output1[j+1]) {
                int32_t tmp = output1[j];
                output1[j] = output1[j+1];
                output1[j+1] = tmp;
            }
        }
    }
    
    size_t out_len = (scores_len >= 3) ? 3 : scores_len;
    for (size_t i = 0; i < out_len; i++) {
        output[i] = output1[scores_len - 1 - i];  // highest first
    }

    return out_len;
}