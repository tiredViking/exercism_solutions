#include "raindrops.h"

void convert(char result[], int drops){
    bool pling = (drops % 3 == 0);
    bool plang = (drops % 5 == 0);
    bool plong = (drops % 7 == 0);

    if (pling && !plong && !plang) strcpy(result, "Pling");
    else if (!pling && !plong && plang) strcpy(result, "Plang");
    else if (!pling && plong && !plang) strcpy(result, "Plong");
    else if (pling && plong && !plang) strcpy(result, "PlingPlong");
    else if (pling && !plong && plang) strcpy(result, "PlingPlang");
    else if (!pling && plong && plang) strcpy(result, "PlangPlong");
    else if (pling && plong && plang) strcpy(result, "PlingPlangPlong");
    else sprintf(result, "%d", drops);
}