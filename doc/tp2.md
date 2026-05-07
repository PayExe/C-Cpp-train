#include <stdio.h>

int add(void) {
int a, b;
scanf("%d" "%d", &a, &b);
return a + b;
}

int sub(void) {
int a, b;
scanf("%d" "%d", &a, &b);
return a - b;
}

int main(void) {
printf("%d", add());
printf("\n");
printf("%d", sub());
return 0;
}
