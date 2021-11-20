#include "includes.h"

void mostrarVetor(int *vet, int size) 
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%i\n", vet[i]);
    }
}

float media (char *seqNumeros, char *sep) 
{
    float vetNum[strlen(seqNumeros)];
    printf("strlen(string) = %i\n", (int) strlen(seqNumeros));
    int i;
    int vetSize = 0;
    float sum = 0;

    stringToFloatVet(vetNum, &vetSize, seqNumeros, sep);

    for (i = 0; i < vetSize; i++) 
    {
        sum += vetNum[i];
    }

    return sum / vetSize;
}

float mediana (char *seqNumeros)
{

}

float moda (char *seqNumeros)
{

}