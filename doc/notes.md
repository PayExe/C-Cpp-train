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
