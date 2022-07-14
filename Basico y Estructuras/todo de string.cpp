#include <stdio.h>
#include <string.h>// para strcmp si  (mayor el segundo)1<valor< 1(mayor el primero) igual, son iguales

#define DIM 128

int main() {
    char palabra1[DIM];
    char palabra2[DIM];
    printf("cual es la primera palabra o frase: ");
    gets(palabra1);
    strcpy(palabra2,palabra1);
    printf("\nla cadena original es: %s y su tamaño es: %d",palabra1, strlen(palabra1));
	printf("\nla cadena copiada es: %s y su tamaño es: %d",palabra2, strlen(palabra2));
    printf("\nel valor devuelto por la comparacion de cadenas %d\n", strcmp(palabra1, palabra2));
    
}
/* tener en cuenta
#include <stdio.h>

#define TAM 16

int main() {
    char nombre[TAM], ciudad[TAM];

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);
    getchar(); ---------------------------------------------------------olvida el enter

    printf("Introduce tu ciudad de residencia: ");
    gets(ciudad);

    printf("Hola, %s. Vives en %s.\n", nombre, ciudad);

    return 0;
}
*/
