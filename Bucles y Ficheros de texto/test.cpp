#include<stdio.h>
int main(){
	enum {dolar=1, yen_japones,libra_esterlina};
	int opcion;
	float cantidad;
	printf("ingese la cantidad: ");
	scanf("%f", &cantidad);
	printf("MENU \nSeleccione una opcion: \n1.Dolar \n2.Yen japones \n3.Libra esterlina\n");
	scanf("%d",&opcion);
	switch (opcion){
		case dolar: printf("A Dolar son: %f",cantidad*0.045);
				break;
		case yen_japones: printf("A Yen japones son: %f",cantidad*4.77);
				break;
		case libra_esterlina: printf("A Libra esterlina: %f", cantidad*0.035);
				break;
		default: printf("Esta opcion no existe");
	}
	return 0;
}
/*#include<stdio.h>
int main(){
	char opcion;
	float cantidad;
	printf("ingese la cantidad: ");
	scanf("%f", &cantidad);
	printf("MENU \nSeleccione una opcion: \n1.(D)olar \n2.(Y)en japones \n3.(L)ibra esterlina\n");
	scanf("%s",&opcion);
	switch (opcion){
		case 'd':
		case 'D': printf("A Dolar son: %f",cantidad*0.045);
				break;
		case 'y':
		case 'Y': printf("A Yen japones son: %f",cantidad*4.77);
				break;
		case 'l':
		case 'L': printf("A Libra esterlina: %f", cantidad*0.035);
				break;
		default: printf("Esta opcion no existe");
	}
	return 0;
}
*/
