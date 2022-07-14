#include<stdio.h>
int mayNum (char *p){
	int i;
	for(i=0;*p!=0;p++,i++)
		*p += 'A'-'a';
	return i;
}
int main(){
	char cadena[128];
	int tam;
	printf("escriba una palabra: ");
	scanf("%s", cadena);
	tam= mayNum(cadena);
	printf("escribiste %s de tamaño %d",cadena,tam);
}
/* 
#include <stdio.h>

#define DIM 10

void minu_a_mayu(char *p) {
    for (; *p!= 0; p++)
        *p += 'A'-'a';
}

int main() {
    char nombre[DIM] = "data";

    minu_a_mayu(nombre);
    printf("%s", nombre);

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>

#define DIM 10

void agregar_txt(char *cadena) {
    int i = strlen(cadena);

    cadena[i] = '.';
    i++;
    cadena[i] = 't';
    i++;
    cadena[i] = 'x';
    i++;
    cadena[i] = 't';
    i++;
    cadena[i] = 0;
}

int main() {
    char nombre[DIM] = "data";

    agregar_txt(nombre);
    printf("%s", nombre);

    return 0;
}
*/
