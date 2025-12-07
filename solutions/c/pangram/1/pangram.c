#include "pangram.h"

bool is_pangram(const char *sentence){
    char seen[26] = {false};
    if (sentence == NULL || strlen(sentence) == 0) return false;
    else {
        char buffer[strlen(sentence)];
        for (size_t letter = 0; letter < strlen(sentence); letter++){
            buffer[letter] = tolower(sentence[letter]);
        }
        for (size_t letter = 0; letter < strlen(sentence); letter++){
            switch (buffer[letter]){
                case 'a': seen[0] = true;
                break;
                case 'b': seen[1] = true;
                break;
                case 'c': seen[2] = true;
                break;
                case 'd': seen[3] = true;
                break;
                case 'e': seen[4] = true;
                break;
                case 'f': seen[5] = true;
                break;
                case 'g': seen[6] = true;
                break;
                case 'h': seen[7] = true;
                break;
                case 'i': seen[8] = true;
                break;
                case 'j': seen[9] = true;
                break;
                case 'k': seen[10] = true;
                break;
                case 'l': seen[11] = true;
                break;
                    case 'm': seen[12] = true;
                break;
                    case 'n': seen[13] = true;
                break;
                    case 'o': seen[14] = true;
                break;
                    case 'p': seen[15] = true;
                break;
                    case 'q': seen[16] = true;
                break;
                    case 'r': seen[17] = true;
                break;
                    case 's': seen[18] = true;
                break;
                    case 't': seen[19] = true;
                break;
                    case 'u': seen[20] = true;
                break;
                case 'v': seen[21] = true;
                break;
                case 'w': seen[22] = true;
                break;
                    case 'x': seen[23] = true;
                break;
                    case 'y': seen[24] = true;
                break;
                    case 'z': seen[25] = true;
                break;
                default: continue;
            }
        }
        
    }
    for (size_t i = 0; i < 26; i++){
        if (seen[i] == false) return false;
        else continue;
    }
    return true;
}
