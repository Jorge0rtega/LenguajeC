#include <stdio.h>
#include "primo.h"

int main() {
    int num;

    printf("Introduce un n�mero entero: ");
    scanf("%d", &num);

    if (esPrimo(num))
        printf("%d es primo.", num);
    else
        printf("%d no es primo", num);

    return 0;
}
