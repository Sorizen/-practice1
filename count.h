#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Count_symbols(char *str)
{
    int counter_of_symbols = 0; // счетчик
    while(str[counter_of_symbols]) // пока символ в строке не False(0) - добавляем счетчик
        counter_of_symbols++;
    return counter_of_symbols; // Возвращаем колличество символов
}