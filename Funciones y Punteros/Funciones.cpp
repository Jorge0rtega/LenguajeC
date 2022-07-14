#include<stdio.h>
#include<math.h>
int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}
int primoMayor(int nume){
		for(;nume>=0;nume--)
			if(esPrimo(nume))				
				return nume;	
}
int main(){
	int numero;
	do{
	printf("Intruduce un numero superior a 1:");
	scanf("%d",&numero);
	}while(numero<2);
	printf("El mayor primo comprendido entre 2 y %d es %d.",numero,primoMayor(numero));
}

/*#include<stdio.h>
#include<math.h>
int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
	int numero,i=0;
	do{	
	printf("\ningresa un numero entero: ");
	scanf("%d",&numero);
	if(esPrimo(numero)){
		if(esPrimo(numero+2)&&esPrimo(numero-2))
			printf("El numero %d es primo y los numeros %d y %d son primos gemelos.\n",numero,numero-2,numero+2);
		else if(esPrimo(numero+2))
			printf("El numero %d es primo y el %d es primo gemelo.\n",numero,numero+2);
		else if(esPrimo(numero-2))
			printf("El numero %d es primo y el %d es primo gemelo.\n",numero,numero-2);
		else
			printf("El numero %d es primo pero no tiene un primo gemelo.\n",numero);
	}
	else
		printf("El numero %d no es primo.\n",numero);
	}while(i==0);
	return 0;
}*/


/*#include <stdio.h>
#include<math.h>
int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
	int numero,i;
	printf("escriba un numero: ");
	scanf("%d",&numero);
	printf("los numeros primos del 2 al %d son\n",numero);
	for(i=2;i<numero;i++)
		if(esPrimo(i))
			printf("%d ",i);
}*/
/*#include<stdio.h>
float areaTriangulo(float b, float h){
	return (b*h)/float(2);
}
int main(){
	float base,altura;
	printf("cual la base del triangulo: ");
	scanf("%f",&base);
	printf("cual es la altura: ");
	scanf("%f",&altura);
	printf("el area es: %.2f",areaTriangulo(base, altura));
	return 0;
}*/



/*#include<stdio.h>
void areaTriangulo(int b, int h){
	float area;
	area=(b*h)/2;
	printf("el area es: %.2f",area);
}
int main(){
	float base,altura;
	printf("cual la base del triangulo: ");
	scanf("%f",&base);
	printf("cual es la altura: ");
	scanf("%f",&altura);
	areaTriangulo(base,altura);
	return 0;
}*/
