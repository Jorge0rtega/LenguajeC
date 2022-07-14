#include<stdio.h>
#include<string.h>//para strlen
int main(){
	int cortar;
	char palabra[50]="supercalifragilisticoespialidoso";
	printf("el tamaño de la palabra es: %d",strlen(palabra));
	printf("\nindica un numero menor al de la palabra: ");
	scanf("%d",&cortar);
	palabra[cortar]=0;
	printf("\nla palabra acortada es: %s",palabra);
	printf("\nel tamaño de la nueva palabra es: %d",strlen(palabra));
}
