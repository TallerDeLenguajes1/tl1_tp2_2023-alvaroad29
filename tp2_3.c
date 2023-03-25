#define N 5
#define M 7
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j;
    int mt[N][M],*puntero;

    srand(time(NULL));

    puntero = &mt[0][0];

    /*
    for(i = 0;i<N*M; i++) // guarda una fila despues de otra, solo necesito un for
    {
        *puntero = 1 + rand() % 100;
        printf("%d", *puntero);
        printf("\n");
        puntero++;
    }
    */

    int k=0;
    for (i = 0; i < N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(puntero+k) = 1 + rand() % 100;
            printf(" %d ", *(puntero+k));
            k++;
        }      
        printf("\n");
    }
    

    /*
    printf("-----------VISTA COMO MATRIZ-----------\n");
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            printf(" %d ", mt[i][j]);
        }      
        printf("\n");
    }
    */

    return 0;
}


/*
otra for profe<
for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            *(*(mt+i)+j) = 1 + rand() % 100;
            printf("%d",*(*(mt+i)+j));
        }
}
*/
