#include <stdio.h>
#include <stdlib.h> //permite usar la funcion rand()
#include <time.h> // permite usar la funcion time()

typedef struct {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos, xq es un puntero??????????
}datos;

//void carga(datos *compus); //notacion de punteros , datos *compus = datos compus[]
void lista(datos *compus); //muestro
void masVieja(datos *compus);
void masVelocidad(datos *compus);

int main()
{
    datos compus[5];
    srand(time(NULL)); // srand me genera una semilla a partir de time()

    
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"}; // 6 filas, 10 columnas (cantidad de caracteres)
    for(int i = 0; i < 5; i++) {
        compus[i].anio = 2015 + rand() % 9 ; //rand % 9, genera numero entre 0 y 9, y sumamos 2015
        compus[i].velocidad = 1+ rand() % 3; // genera numero entre 1 y 3
        compus[i].cantidad = 1 + rand() % 8 ; // numeros entre 1 y 8, (rand () % 8 genera numeros entre 0 y 7)
        compus[i].tipo_cpu = tipos[rand() % 6]; // numeros entre 0 y 5
    }
    

    //carga(compus);
    lista(compus);
    masVieja(compus);
    masVelocidad(compus);

    return 0;
}

/*
void carga(datos *compus) {
    char *tipos[]={"Intel","AMD","Celeron","Athlon","Core","Pentium"}; // 6 filas, 10 columnas (cantidad de caracteres), xq asi funciona??
    for(int i = 0; i < 5; i++) {
        compus[i].anio = 2015 + rand() % 9 ; //rand % 9, genera numero entre 0 y 9, y sumamos 2015
        compus[i].velocidad = 1+ rand() % 3; // genera numero entre 1 y 3
        compus[i].cantidad = 1 + rand() % 8 ; // numeros entre 1 y 8, (rand () % 8 genera numeros entre 0 y 7)
        compus[i].tipo_cpu = tipos[(rand() % 6)]; // numeros entre 0 y 5
    }
}
*/


void lista(datos *compus)
{
    printf("\n----------------lista------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("Velocidad de procesamiento: %d \n", compus[i].velocidad); //notacion puntero + notacion arreglos, asi no necesito mover el puntero
        printf("Anio de fabricacion: %d \n", compus[i].anio);
        printf("Cantidad de nucleos: %d \n", compus[i].cantidad);
        printf("Tipo de procesador: %s\n", compus[i].tipo_cpu);
        printf("\n");
    }
}

void masVieja(datos *compus){
    int indice,mayorAnio;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            mayorAnio = compus[i].anio;
            indice = 0;
        }
        else
        {
            if (compus[i].anio < mayorAnio)
            {
                indice = i;
                mayorAnio = compus[i].anio;
            }
            
        }
        
    }
    printf("\n----------------Pc mas viejas datos: ------------------\n");
    printf("Velocidad de procesamiento: %d \n", compus[indice].velocidad);
    printf("Anio de fabricacion: %d \n", compus[indice].anio);
    printf("Cantidad de nucleos: %d \n", compus[indice].cantidad);
    printf("Tipo de procesador: %s\n", compus[indice].tipo_cpu);
    printf("\n");
    
}

void masVelocidad(datos *compus){
    int indice,masVelocidad;
    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            masVelocidad = compus[i].velocidad;
            indice = 0;
        }
        else
        {
            if (compus[i].velocidad > masVelocidad)
            {
                indice = i;
                masVelocidad = compus[i].velocidad;
            }
            
        }
        
    }
    printf("\n----------------Pc mas veloz datos: ------------------\n");
    printf("Velocidad de procesamiento: %d \n", compus[indice].velocidad);
    printf("Anio de fabricacion: %d \n", compus[indice].anio);
    printf("Cantidad de nucleos: %d \n", compus[indice].cantidad);
    printf("Tipo de procesador: %s\n", compus[indice].tipo_cpu);
    printf("\n");
}