#include<stdio.h>
int main(){
	char cadena[10], min, may;
	int i=0;
	printf("Introduce una cadena de caracteres en min�sculas: ");
	scanf("%s", cadena);
	printf("Introduce un car�cter en min�culas: ");
	do{
		scanf("\n%c", &min);
		printf("%c", min);
		if(min<'a' || min>'z')
			printf("Error!!!! Introduce un car�cter en min�culas: ");
	}while(min<'a' || min>'z');
	printf("Introduce un car�cter en mayusculas: ");
	do{
		scanf("\n%c", &may);
		if(may<'A' || may>'Z')
			printf("Error!!!! Introduce un car�cter en mayusculas: ");
	}while(may<'A' || may>'Z');
	while(i<10){
		if(cadena[i]==min)
			printf("%c",may);
		else
		printf("%c",cadena[i]);
		i++;
	}
}


/*#include<stdio.h>
int main(){
	int dim,i=0,num[10];
	printf("Este programa tiene que solicite al usuario cu�ntos n�meros quiere leer por teclado (entre 2 y 10), leerlos y mostrar aquellos que sean menores al �ltimo introducido.");
	printf("\nCuantos n�meros quieres comparar, Elige un numero entre 2 y 10: ");
	do{ --lo hace forzosamente una vez
		scanf("%d", &dim);
		if(dim<2||dim>10)
			printf("error!!!, Elige un n�mero entre 2 y 10: ");
	}while(dim<2||dim>10);
	while(i<dim){
		printf("Introduce el n�mero %d de %d: ",i+1,dim);
		scanf("%d",&num[i]);
		i++;
	}
	i=0;
	while(i<dim){
		if(num[i]<num[dim-1])
			printf("\nEl numero %d es menor que el numero %d ",num[i],num[dim-1]);
			i++;
	}
}
*/


/*#include<stdio.h>
int main(){
	int var[10]={2,4,6,8,10,12,14,16,18,20}, num, i=0;
	printf("cuantos elementos quieres que se muestren por pantalla (0-10): ");
	do{
		scanf("%d",&num);
		if(num<0||num>11){
			printf("El n�mero introducido no es correcto, vuelve a intentarlo: ");
		}
	}while(num<0||num>11);
	while(i<num){
		printf("%d ",var[i]);
		i++;
	}
}
*/


/*#include<stdio.h>
int main(){
	int i=0, numero, numero1;
	do{
		printf ("teclee un numero del 0 al 99: ");
		scanf("%d",&numero);
		if(numero>=100 || numero<=0)
		("error!!!");
	}while(numero>=100 || numero<=0);
	do{
		printf("\n");
		i++;
	}while(i<30);
	printf("cual es le numero del 0-99: ");
	scanf("%d",&numero1);
	do{
		do{
			printf("error!!! demasiado peque�o, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}while(numero1<numero);
		do{
			printf("error!!! demasiado grande, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}while(numero1>numero);
	}while(numero!=numero1 );
	printf("perfecto!!!!");
}*/
