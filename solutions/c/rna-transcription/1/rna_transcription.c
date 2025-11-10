#include "rna_transcription.h"

char *to_rna(const char *dna) {
    if (dna == NULL) return NULL;  // must check before using dna

    int count = 0;
    while (dna[count] != '\0') {
        count++;
    }

    char *rna = malloc(count + 1);
    if (rna == NULL) return NULL;

    for (int i = 0; i < count; i++) {
        switch (dna[i]) {
            case 'G': rna[i] = 'C'; break;
            case 'C': rna[i] = 'G'; break;
            case 'T': rna[i] = 'A'; break;
            case 'A': rna[i] = 'U'; break;
            default:  rna[i] = '?'; break;
        }
    }

    rna[count] = '\0';
    return rna;
}