#include<stdio.h>
int main(){
	int tabla[3][5]={{6,8,6,7,10},{7,2,5,4,9},{3,9,7,5,6}};//[fila][columna]
	float promedio1,promedio2, promedio3;
	promedio1 = (tabla[0][0]+tabla[0][1]+tabla[0][2]+tabla[0][3]+tabla[0][4])/5.0;
	promedio2 = (tabla[1][0]+tabla[1][1]+tabla[1][2]+tabla[1][3]+tabla[1][4])/5.0;
	promedio3 = (tabla[2][0]+tabla[2][1]+tabla[2][2]+tabla[2][3]+tabla[2][4])/5.0;
	printf("\nel primer promedio es: %f",promedio1);
	printf("\nel segundo promedio es: %f",promedio2);
	printf("\nel tercer promedio es: %f",promedio3);
	printf("tabla 1: %d",tabla[0]);
}

