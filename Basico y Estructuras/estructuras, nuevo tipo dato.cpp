#include <stdio.h>

#define MAX 128

int main() {
    struct {
        char nombre[MAX],campeon[MAX];
        int nivel,experiencia;
		int KDA [3];
    } juego;
   	float KDA;
    printf("\ncual es tu nombre de usuario: ");
    gets(juego.nombre);
   	printf("\nnombre del campeon: ");
   	gets(juego.campeon);
   	printf("\nnivel: ");
   	scanf("%d",&juego.nivel);
   	printf("\nexperiencia: ");
   	scanf("%d",&juego.experiencia);
   	printf("\nasesinato: ");
   	scanf("%d",&juego.KDA[0]);
   	printf("\nmuertes: ");
   	scanf("%d",&juego.KDA[1]);
   	printf("\nasistencias: ");
   	scanf("%d",&juego.KDA[2]);
   	KDA=(juego.KDA[0]+juego.KDA[2])/float (juego.KDA[1]);
    printf("nombre de usuario %s, campeon %s, de nivel %d y experiencia %d, tu KDA es: %f",juego.nombre,juego.campeon,juego.nivel,juego.experiencia,KDA);
    
    return 0;
}

/* AFUERA
#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char autor[MAX_STR];
    char titulo[MAX_STR];
    int anyo;
} Libro;

int main () {
    Libro novela = {"Mario Vargas Llosa", "El héroe discreto", };
    
    printf("Introduzca el año de publicación de %s, de %s: ", novela.titulo, novela.autor);
    scanf("%d", &novela.anyo);

    printf("%s fue escrito por %s en %d.\n", novela.titulo, novela.autor, novela.anyo);   
    return 0;
}*/
