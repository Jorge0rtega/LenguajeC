#include <stdio.h>

#define DIM 3

void incrementa(int *p, int num) {
    int i;
    for (i=0; i<num; i++)
        p[i]++;
}

int main() {
    int i, datos[DIM] = {2,3,5};

    incrementa(datos, DIM);

    for (i=0; i<DIM; i++)
        printf("%d ", datos[i]);

    return 0;
}
/*#include<stdio.h>
#define macro 5
void inc (int *p, int tam, int mac){
	int i;
	for(i=0;i<tam;*p++,i++)
		(*p)+=mac;
}
int main(){
	int tabla[3]={1,2,3};
	printf("El contenido de la tabla es: %d %d %d",tabla[0], tabla[1], tabla[2]);
	inc(tabla,3,macro);
	printf("\nEl nuevo contenido de la tabla es: %d %d %d",tabla[0], tabla[1], tabla[2]);
	
}*/
/*#include <stdio.h>

#define DIM 3

double media(int *p, int num) {
    int i;
    double m;

    for (i=0, m=0.0; i<num; i++)
        m += p[i];

    return m/num;
}

int main() {
    int datos[DIM] = {2,3,5};

    printf("La media es: %.2lf", media(datos, DIM));

    return 0;
}*/
