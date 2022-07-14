#include <stdio.h>

int main() {
    char c1,c2,c3,c4,c5,c1mod,c2mod,c3mod,c4mod,c5mod;
	char c11,c21,c31,c41,c51,c1mod1,c2mod1,c3mod1,c4mod1,c5mod1;   
    printf("cual es la primera letra: ");
    scanf("%c",&c1);
    printf("cual es la segunda letra: ");
    scanf("\n%c",&c2);// se debe de poner \n para evitar caer en error de enter
    printf("cual es la segunda letra: ");
    scanf("\n%c",&c3);
    printf("cual es la segunda letra: ");
    scanf("\n%c",&c4);
	printf("cual es la segunda letra: ");
    scanf("\n%c",&c5);
	c1mod= c1+3;// seguarda como int de codigo ACSSI por eso se le puede sumar 3
	c2mod= c2+3;
	c3mod= c3+3;
	c4mod= c4+3;
	c5mod= c5+3;
    printf("\nlo que escribiste es: %c%c%c%c%c", c1,c2,c3,c4,c5);
    printf("\ncodificado es: %c%c%c%c%c", c1mod,c2mod,c3mod,c4mod,c5mod);
   
   	printf("\ncual es la primera letra cifrada: ");
    scanf("\n%c",&c11);
    printf("cual es la segunda letra cifrada: ");
    scanf("\n%c",&c21);
    printf("cual es la segunda letra cifrada: ");
    scanf("\n%c",&c31);
    printf("cual es la segunda letra cifrada: ");
    scanf("\n%c",&c41);
	printf("cual es la segunda letra cifrada: ");
    scanf("\n%c",&c51);
	c1mod= c11-3;
	c2mod1= c21-3;
	c3mod1= c31-3;
	c4mod1= c41-3;
	c5mod1= c51-3;
    printf("\nlo palñabra cifrada es: %c%c%c%c%c", c11,c21,c31,c41,c51);
    printf("\ndecodificado es: %c%c%c%c%c", c1mod1,c2mod1,c3mod1,c4mod1,c5mod1);
    return 0;
}
