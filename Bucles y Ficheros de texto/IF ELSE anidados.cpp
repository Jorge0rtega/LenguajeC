#include <stdio.h>

int main() {
    int edad;
  
 	printf("Cual es tu edad: ");
 	scanf("%d", &edad);
	if((edad>=18)&(edad%3!=0))
		printf("eres mayor y tu edad no es multiplo de tres");
	if((edad>=18)&(edad%3==0))
		printf("eres mayor y tu edad es multiplo de tres");
	if(edad<18)
	printf("eres menor de edad");
    return 0;
}
