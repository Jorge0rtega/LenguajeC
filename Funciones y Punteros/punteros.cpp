#include<stdio.h>
void estadistica (int x, int y, double *pMedia, double *pVar);
int main(){
	int num1, num2;
	double media,var;
	printf("digite un numero entero: ");
	scanf("%d",&num1);
	printf("digite otro numero entero: ");
	scanf("%d",&num2);
	estadistica(num1,num2,&media,&var);
	printf("media: %lf",media);
	printf("\nvarianza: %lf",var);
}
void estadistica (int x, int y, double *pMedia, double *pVar){
	(*pMedia)= (x+y)/2;
	(*pVar)= (((x-(*pMedia))*(x-(*pMedia))) + ((y-(*pMedia))*(y-(*pMedia)))) /2;	
}
/*#include<stdio.h>
void niParesniNones(int *a,int *b);
int main(){
	int num1, num2;
	printf("digite un numero entero: ");
	scanf("%d",&num1);
	printf("digite otro numero entero: ");
	scanf("%d",&num2);
	niParesniNones(&num1,&num2);
	printf("los numeros tras llamar a la funcion son: %d y %d",num1,num2);
}
void niParesniNones(int *a,int *b){
	if((*a%2==0)&&(*b%2==0) ||(*a%2==1)&&(*b%2==1))
		(*b)++;
}*/
/*#include <stdio.h>
int main(){
	int entrada1,entrada2, *e1, *e2;
	double media,*m;
	e1=&entrada1;
	e2=&entrada2;
	m=&media;
	printf("ingrese un numero entero: ");
	scanf("%d",e1);
	printf("ingrese otro numero entero: ");
	scanf("%d",e2);
	*m=(*e1+*e2)/float(2);
	printf("la media es: %lf",*m);
}*/
/*#include <stdio.h>

int main() {
    int i, *p;

    i = 1000000;
    printf("La variable i vale %d.\n", i);
   
    p = &i;
    *p = 10;
    printf("La variable i vale %d.\n", i);

    return 0;
}*/
