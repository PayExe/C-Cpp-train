#include <stdio.h>
#include <stdlib.h>
#include "affichage.h"

float moyenne()
{
    float *notes = NULL;
    int nb = 0;
    int i = 0;
    int tabsize = 1;

    printf("Entrez les notes une par une (-1 pour terminer) :\n");

    notes = malloc(sizeof(float) * tabsize);
    if (notes == NULL) {
        return -1.0f;
    }

    while (nb != -1)
    {
        scanf("%d", &nb);
        if (nb != -1 && nb <= 20) {
            if (i >= tabsize) {
                tabsize++;
                float *tmp = realloc(notes, sizeof(float) * tabsize);
                if (tmp == NULL) {
                    free(notes);
                    return -1.0f;
                }
                notes = tmp;
            }
            notes[i] = (float)nb;
            i++;
        }
    }

    float total = 0.0f;
    for (int j = 0; j < i; j++) {
        total += notes[j];
    }

    float moy = 0.0f;
    if (i > 0) {
        moy = total / i;
    }

    affichage((int)moy, i);

    free(notes);

    return moy;
}
