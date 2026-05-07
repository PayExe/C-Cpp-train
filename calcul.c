#include <stdio.h>
#include "calcul.h"
#include "affichage.h"

void moyenne() {
    int total = 0;
    int nb = 0;
    int i = 0;
    while (nb != -1)
    {
        printf("%d\n",total);
        scanf("%d", &nb);
        if (nb != -1 && nb <= 20) {
            total += nb;
            i++;
        }
    }
    affichage(total / i, i);
}