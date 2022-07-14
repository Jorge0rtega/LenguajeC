#include<stdio.h>
int main(){
	char cadena[10], min, may;
	int i=0;
	printf("Introduce una cadena de caracteres en minúsculas: ");
	scanf("%s", cadena);
	printf("Introduce un carácter en minúculas: ");
	do{
		scanf("\n%c", &min);
		printf("%c", min);
		if(min<'a' || min>'z')
			printf("Error!!!! Introduce un carácter en minúculas: ");
	}while(min<'a' || min>'z');
	printf("Introduce un carácter en mayusculas: ");
	do{
		scanf("\n%c", &may);
		if(may<'A' || may>'Z')
			printf("Error!!!! Introduce un carácter en mayusculas: ");
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
	printf("Este programa tiene que solicite al usuario cuántos números quiere leer por teclado (entre 2 y 10), leerlos y mostrar aquellos que sean menores al último introducido.");
	printf("\nCuantos números quieres comparar, Elige un numero entre 2 y 10: ");
	do{ --lo hace forzosamente una vez
		scanf("%d", &dim);
		if(dim<2||dim>10)
			printf("error!!!, Elige un número entre 2 y 10: ");
	}while(dim<2||dim>10);
	while(i<dim){
		printf("Introduce el número %d de %d: ",i+1,dim);
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
			printf("El número introducido no es correcto, vuelve a intentarlo: ");
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
			printf("error!!! demasiado pequeño, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}while(numero1<numero);
		do{
			printf("error!!! demasiado grande, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}while(numero1>numero);
	}while(numero!=numero1 );
	printf("perfecto!!!!");
}*/
