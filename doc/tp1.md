Doc TP1 (si jamais hein)
consigne :
faire deux fonction addition et soustraction de deux int en gros

memo:
-> pas oublié de typé les arguments exemple int

réponses:

```
#include <stdio.h>

int addition(int a, int b)
{
    return a + b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int main(void)
{
    printf("résultat de l'addition : %d\n ", addition(10,15));
    printf("résultat de la soustraction : %d\n ", soustraction(10,15));
    return 0;
}

```

il faut faire le print a la fin car il connait pas les fonctions sinon 🤓
car il lit de haut en bas
