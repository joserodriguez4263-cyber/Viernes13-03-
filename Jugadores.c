#include <stdio.h>


int main()
{
    char jugadores[3][20];
    int i;

    for(i=0; i<3; i++)
    {
        printf("Ingresa el nombre del jugador %d:", i+1);
        scanf("%s", jugadores[i]);
    }
    printf("\nLista de jugadores:\n");
    for(i=0; i<3; i++)
    {
        printf("Jugador %d: %s\n", i+1, jugadores[i]);
    }
return 0;
}
