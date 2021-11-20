#include "includes.h"

void mostrarVetorFloat(float *vet, int size) 
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%.2f\n", vet[i]);
    }
}

void mostrarVetorInt(int *vet, int size) 
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%i\n", vet[i]);
    }
}