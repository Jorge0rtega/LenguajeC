#include <stdio.h>
int main() {
    int dia1, dia2, mes1, mes2, anyo1, anyo2;
  	printf("dia/mes/anyo\n");
 	printf("Introdusca la primera fecha: ");
 	scanf("%d", &dia1);
 	scanf("%d", &mes1);
 	scanf("%d", &anyo1);
 	printf("Introdusca la segunda fecha: ");
 	scanf("%d", &dia2);
 	scanf("%d", &mes2);
 	scanf("%d", &anyo2);
 	
	if(anyo1<anyo2)
		printf("la segunda fecha es mayor");
	else if (anyo1>anyo2)
		printf("la primera fecha es menor");
	else if(mes1<mes2) 
		printf("la segunda fecha es mayor");
	else if(mes1>mes2)
		printf("la primera fecha es menor");
	else if(dia1<dia2)
		printf("la segunda fecha es mayor");
	else if(dia1>dia2)
		printf("la primera fecha es menor");
		
	if (anyo1==anyo2)	
		if(mes1==mes2)		
	 		if(dia1==dia2)	
				printf("las dos fechas son iguales");	

    return 0;
}
