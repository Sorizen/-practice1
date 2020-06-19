#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>
#include "delete.h"
#define MAX 100
int main()
{
int number_of_symbols;
char str[MAX];
printf("Enter the string: ");
fgets(str, MAX, stdin);
Delete(str);
sleep(60);
return 0;  
}