#include "includes.h"

float media (float *vet, int size) 
{
    int i;
    float sum = 0;

    for (i = 0; i < size; i++) 
    {
        sum += vet[i];
    }

    return sum / size;
}

float mediana (float *vet, int size)
{

}

float moda (float *vet, int size)
{

}