#include <stdio.h>
//define MACRO 83 (define-nombre-valor)(no ;/ no =)
int main(){
	const float luna= 0.1655, marte=0.3895, jupiter=2.640, miller=1.3, pandora=0.8, vulcano=1.4;
	float peso, L,M,J,Mi,P,V;
	printf("peso: ");
	scanf("%f", &peso);
	L=peso*luna;
	M=peso*marte;
	J=peso*jupiter;
	Mi= peso* miller;
	P= peso*pandora;
	V= peso*vulcano;
	printf("\nSu peso es: %f",peso);
	printf("\nSu peso luna es: %f",L);
	printf("\nSu peso marte es: %f",M);
	printf("\nSu peso jupiter es: %f",J);
	printf("\nSu peso miller es: %f",Mi);
	printf("\nSu peso pandora es: %f",P);
	printf("\nSu peso vulcano es: %f",V);
}
