// TP plus ou moins.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
#include <stdint.h>

int main()
{
    const int MAX = 100;
    const int MIN = 0;
    int nombreMystere;
    int nombre = 0;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    while (nombre != nombreMystere)
    {
        printf("Quel est le nombre ?");
        scanf_s("%d", &nombre);
        if (nombre < nombreMystere)
        {
            printf("C'est plus !\n");
        }
        else if (nombre > nombreMystere)
        {
            printf("C'est moins !\n");
        }
        else if (nombre == nombreMystere)
        {
            printf("Bravo vous avez trouve le nombre mystere !!!");
        }
    }

    return 0;
}