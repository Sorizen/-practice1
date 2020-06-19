#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mix.h"
#include "count.h"
#define MAX 100

void Delete(char *str)
{
    int exception, counter_of_symbols;
    for(int i = 0; i < MAX; i++)
    {
        if (str[i] == ',' || str[i] == '.' || str[i] == ' ' || str[i] == ':' || str[i] == ';' || str[i] == '?' || str[i] == '!' || str[i] == '-' || str[i] == '(' || str[i] == ')' || str[i] == '"')
        {
            exception = 0;
            for(int j = i; j < MAX; j++ )
            {
                str[j] = str[j+1];
                exception = 1;
            }
            if (exception == 1)
                i--;
        }
    }
    counter_of_symbols = Count_symbols(str);
    Mix(str, counter_of_symbols);
}