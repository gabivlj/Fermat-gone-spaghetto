#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/// Work by Fran Núñez && Gabriel Villalonga
int main()
{
    int Num = 0;
    int Xi = 0;
    float Ei = 0;
    int Zi = 0;
    float Rcd = 0;
    printf("Introduzca el num entero a factorizar utilizando Fermat: ");
    scanf("%i",&Num);
    Xi = sqrt(Num) + 1;
    Ei = ((Xi*Xi)-Num);
    Zi = ((2*Xi)+1);
    do
    {
        Xi = Xi + 1;
        Ei = Ei + Zi;
        Zi = (2*Xi +1);
        Rcd = sqrt(Ei);
    }while(floorf(Rcd)!=Rcd);


    printf("\nx = %i y = %i ",Xi ,(int)sqrt(Ei));
    return 0;
}
