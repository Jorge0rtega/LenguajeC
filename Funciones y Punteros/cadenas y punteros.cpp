#include <stdio.h>

#define TAM 3

int main() {
    int i, a[TAM]={1,2,3}, *p;
    double b[TAM]={1.2,3.1,2.5}, *q;

    for(i=0,p=a,q=b;i<TAM;p++,i++,q++)
    	printf("lista a: %d | lista b: %.1lf\n",*p,*q);
    return 0;
}

/*#include<stdio.h>
int main(){
	char cadena[128],*p;
	int i;
	printf("escribe una cadena: ");
	scanf("%s",cadena);
	for(i=0, p=cadena;i<128;p++,i++)//tambien puede ser for(i=0, p=&cadena[0];i<128;p++,i++)
		if(*p==0)
			break;
	printf("%s tiene %d letras",cadena,i);
}*/
