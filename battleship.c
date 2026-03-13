#include <stdio.h>

int main() {

    int tablero[5][5];
    int fila, columna;
    int barcos = 3;
    int encontrados = 0;

    // Inicializar tablero
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tablero[i][j] = 0;
        }
    }

    // Colocar barcos manualmente
    tablero[1][2] = 1;
    tablero[3][4] = 1;
    tablero[0][0] = 1;

    // Ciclo de turnos
    for(int turno = 1; turno <= 10; turno++) {

        printf("\nTurno %d\n", turno);

        // Mostrar tablero
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {

                if(tablero[i][j] == -1)
                    printf("X ");   // impacto
                else if(tablero[i][j] == -2)
                    printf("O ");   // agua
                else
                    printf("~ ");   // oculto
            }
            printf("\n");
        }

        // Pedir disparo
        printf("Fila: ");
        scanf("%d", &fila);

        printf("Columna: ");
        scanf("%d", &columna);

        // Evaluar disparo
        if(tablero[fila][columna] == 1) {

            printf("Impacto\n");
            tablero[fila][columna] = -1;
            encontrados++;

        } else if(tablero[fila][columna] == 0) {

            printf("Agua\n");
            tablero[fila][columna] = -2;

        } else {

            printf("Ya disparaste ahi\n");

        }

        printf("Barcos encontrados: %d\n", encontrados);

        if(encontrados == barcos){
            printf("\GG\n");
            break;
        }
    }

    return 0;
}
