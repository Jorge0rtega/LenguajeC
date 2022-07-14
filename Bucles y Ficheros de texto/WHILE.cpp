#include<stdio.h>
int main(){
	int var[10]={2,4,6,8,10,12,14,16,18,20}, num, i=0;
	printf("cuantos elementos quieres que se muestren por pantalla: ");
	scanf("%d",&num);
	while(i<num){
		printf("%d ",var[i]);
		i++;
	}
}



/*#include<stdio.h>
int main(){
	int i=0, numero, numero1;
	printf("numero clave del 0-99: ");
	scanf("%d",&numero);
	while(numero>=100 || numero<=0){
		printf ("no es un numero del 0 al 99, teclea uno en el rango:");
		scanf("%d",&numero);
	}
	while(i<10){
		printf("\n");
		i++;
	}
	printf("cual es le numero del 0-99: ");
	scanf("%d",&numero1);
	while(numero!=numero1 ){
		while(numero1<numero){
			printf("error!!! demasiado pequeño, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}
		while(numero1>numero){
			printf("error!!! demasiado grande, cual es le numero del 0-99: ");
			scanf("%d",&numero1);
		}
	}
	printf("perfecto!!!!");
}*/
