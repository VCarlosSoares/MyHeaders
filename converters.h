#include "includes.h"

void stringToFloatVet (float *vetNum, int *vetSize, char *seqNumeros, char *sep)
{
    int i;
    char *token;

    token = strtok(seqNumeros, sep);
    while(token != NULL) 
    {
        vetNum[(*vetSize)++] = atof(token);

        token = strtok(NULL, sep);
    }
}