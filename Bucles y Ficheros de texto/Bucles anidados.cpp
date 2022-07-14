#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={0,1,2,4,2,3,1,4,5};	
	int i,j;
	for(i=0; i<3;i++){
		for(j=0; j<3;j++)
			 printf("\t%d",a[i][j]+b[i][j]);
		printf("\n");
	}
}
/*#include<stdio.h>
int main(){
	int i,j;
	for(i=0; i<=10;i++){
	printf("\nLa tabla del %d es: ",i);
		for(j=0; j<=10;j++)
		 printf("\n%d por %d es %d",i,j,i*j);
	}
}*/

/*#include<stdio.h>
int main(){
	int i,j;
	for(i=1; i<=10;i++){
	printf("\nLa tabla del %d es: ",i);
		for(j=1; j<=i;j++)
		 printf("\n%d por %d es %d",i,j,i*j);
	}
}*/

