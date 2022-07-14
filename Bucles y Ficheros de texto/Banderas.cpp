#include<stdio.h>
int main(){
	int num,i=0,ir,bin[30],div;
	printf("Introduzca un número entero: ");
	scanf("%d",&num);
	bin[i]=num%2;
	div=num/2;
	for(i=1;div>0;i++){		
		bin[i]=div%2;
		div=div/2;							
	}
	printf("El numero en binario es:" );
	for(ir=i-1;ir>-1;ir--) //para ir de reversa
		printf("%d", bin[ir]);
	return 0;
}
/*#include<stdio.h>
int main(){
	int num[10],i,neg=0,pos=0, sum=0, ir;
	for(i=0;i<10;i++){		
		printf("Introduzca un número entero (0 para terminar): ");
		scanf("%d",&num[i]);		
		if(num[i]==0)
			break;
	}
	printf("Los números tecleados son:" );
	for(ir=i-1;ir>-1;ir--)
		printf("%d", num[ir]);
	return 0;
}
*/

/*#include<stdio.h>
int main(){
	int num[10],i=0,neg=0,pos=0, sum=0;
	for(i=0;i<10;i++){		
		printf("Introduzca un número entero (0 para terminar): ");
		scanf("%d",&num[i]);
		if(num[i]<0)
			neg++;
		if(num[i]>0){
			pos++;
			sum+=num[i];
		}
		if(num[i]==0)
			break;
	}
	printf("Se han leido un total de %d numeros, de los cuales %d eran negativos.",i,neg);
	printf("La suma de los %d valores positivos leidos es: %d.",pos,sum);
	return 0;
}*/
