#include <stdio.h>

#define MAX 128
typedef struct {
	char campeon[128];
	int asesinatos,muertes,asistencias;
}juego;
typedef struct{
	char usuario[128];
	int experiencia, nivel;
	juego jugador;
}invocador;

int main() {
    invocador jugador1;
   	float KDA;
    printf("\ncual es tu nombre de usuario: ");
    gets(jugador1.usuario);
   	printf("\nnombre del campeon: ");
   	gets(jugador1.jugador.campeon);
   	printf("\nnivel: ");
   	scanf("%d",&jugador1.nivel);
   	printf("\nexperiencia: ");
   	scanf("%d",&jugador1.experiencia);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1.jugador.asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1.jugador.muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1.jugador.asistencias);
   	KDA=(jugador1.jugador.asistencias+jugador1.jugador.asesinatos)/jugador1.jugador.muertes;
    printf("nombre de usuario %s, campeon %s, de nivel %d y experiencia %d, tu KDA es: %f",jugador1.usuario,jugador1.jugador.campeon,jugador1.nivel,jugador1.experiencia,KDA);
    
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
