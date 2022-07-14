#include <stdio.h>

int main() {
    int edad;
  
    printf("Escribe un programa que solicite tu edad y muestre un 1 por pantalla si eres mayor de edad (18 años o más) o tu edad no es múltiplo de tres");
 	printf("Cual es tu edad: ");
 	scanf("%d", &edad);
    printf("El resultado es: %d\n", edad>=18 || edad%3!=0);
	printf("Escribe un programa que solicite tu edad y muestre un 1 por pantalla si eres mayor de edad y tu edad no es múltiplo de tres.");
	printf("El resultado es: %d\n", edad>=18 && edad%3!=0);
    return 0;
}
