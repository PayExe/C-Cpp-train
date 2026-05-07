#include <stdio.h>
#include "../calcul.h"

int add(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int sub(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    return a - b;
}

int mult(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    int res = 0;
    for (int i = 0; i < b; ++i) {
        res += a;
    }
    return res;
}

int div(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Erreur: division par 0\n");
        return 0;
    }

    int quotient = 0;
    int reste = a;

    while (reste >= b) {
        reste -= b;
        quotient++;
    }

    return quotient;
}
