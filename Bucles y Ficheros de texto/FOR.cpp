#include<stdio.h>
int main(){
	char cadena[50],Ncadena[50];
	int i, NNP,NP;
	printf("Introduce una cadena de caracteres: ");
	scanf("%s",cadena);
	for(i=0;i<=50;i++){
		if(cadena[i]==0){
			printf("preuba");
			NNP=i;
			printf("\nLa cadena camino tiene una longitud de %d caracteres y la mitad es la posición %d.",NNP,NNP/2);
			i=51;
		}	
	}
	i=0;
	NP=NNP/2;
	while(NP<50)
	{		
		Ncadena[i]=cadena[NP];
		NP++;
		i++;
	}
	printf("\nLa segunda mitad de la cadena %s es %s.",cadena,Ncadena);
}



/*#include<stdio.h>
int main(){
	int num,i;
	printf("Introduce un número entre 1 y 9: ");
	do{	
		scanf("%d", &num);
		if(num<1||num>9)
		printf("error!!! Introduce un número entre 1 y 9: ");
	}while(num<1||num>9);
	printf("la tabla del %d es ",num);
	for(i=0;i<=10;i++)
		printf("\n%d por %d es %d",num,i,i*num);
}*/
