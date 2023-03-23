// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main()
{
    int i;
    double vt[N],*puntero;
    puntero = vt;
    for(i = 0;i<N; i++)
    {
        *puntero = 1 + rand()%100;
        printf("%f\n", *puntero);
        puntero++;
    }
    return 0;
}