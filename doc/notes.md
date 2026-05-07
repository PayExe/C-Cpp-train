Cours 3:

#include <stdio.h>

```
int main(void) {
    int number = 10;
    float coolnumber = 15.5;
    char coolcaracter = 'a';

    printf("size of number : %d\n ", sizeof(number));
    printf("adresses of number : %p\n ", &number);
    printf("value of number : %d\n ", number);

    printf("size of coolnumber : %d\n ", sizeof(coolnumber));
    printf("adresses of coolnumber : %p\n ", &coolnumber);
    printf("value of coolnumber : %d\n ", coolnumber);

    printf("size of coolcaracter : %d\n ", sizeof(coolcaracter));
    printf("adresses of coolcaracter : %p\n ", &coolcaracter);
    printf("value of coolcaracter : %d\n ", coolcaracter);

}
```

```
#include "utils.h"
#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 11;
    swap (&a, &b);
    printf("ok : ", swap);
}
```

int _tab = malloc(sizeof(int) _ tabsize); // créer un tableau (ton tableau c'est "tab", tu peux l'utiliser comme un tableau exemple : tab[0])
tab = realloc(tab, sizeof(int) \* tabsize); // modifier la taille du tableau
free(tab); // libérer la mémoire une fois fini

Malloc et Free
7

```
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
```
