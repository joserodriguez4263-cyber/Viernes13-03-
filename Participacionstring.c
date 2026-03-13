#include <stdio.h>
#include <string.h>

int main(){

    char Alumno2[20] = "Natanael";
    char Alumno1[20] = "Alberto";
    int i;

    char Alumnos[3][20];   // arreglo de 3 nombres
    char Lista[5][16];     // lista de 5 nombres
    int Longitud;

    // Ejemplo simple
    printf("%s\n", Alumno1);

    // Lectura con scanf usando for
    for(i = 0; i < 2; i++){
        printf("Ingresa un nombre: ");
        scanf("%19s", Alumno1);
        printf("Nombre guardado: %s\n", Alumno1);
    }

    getchar(); // limpiar buffer

    // Lectura con fgets usando for
    for(i = 0; i < 2; i++){
        printf("Ingresa otro nombre: ");
        fgets(Alumno2, sizeof(Alumno2), stdin);
        printf("Nombre con fgets: %s", Alumno2);
    }

    // Arreglo de nombres usando strcpy
    strcpy(Alumnos[0], "Pam");
    strcpy(Alumnos[1], "Beto");
    strcpy(Alumnos[2], "Ye");

    printf("\nLista de alumnos:\n");

    for(i = 0; i < 3; i++){
        printf("%s\n", Alumnos[i]);
    }

    // Ejemplo usando strlen
    strcpy(Lista[0], "Carlos");

    Longitud = strlen(Lista[0]);

    printf("\nLa longitud de %s es %d\n", Lista[0], Longitud);

    return 0;
}
