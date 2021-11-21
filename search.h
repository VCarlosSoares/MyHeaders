#include "includes.h"

int nDigitsInt (int n)
{
    if (n == 0)
    {
        return 1;
    }
    return floor(log10(abs(n))) + 1;
}