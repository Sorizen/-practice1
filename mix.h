#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Mix(char *str, int counter)
{
    int j, tmp;
    for (int i = counter - 1; i >= 1; i--) //алгоритм фишера-йетса
    {
        j = rand()%(i + 1);
        tmp = str[j];
        str[j] = str[i];
        str[i] = tmp;
    }
    printf("Conversion string: %s", str);
}