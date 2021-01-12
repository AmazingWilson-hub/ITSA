#include <stdlib.h>  
#include <stdio.h>  
#include <string.h>  
#include <ctype.h>  
  
int main()  
{  
    char *input = malloc(sizeof(char) * 1024);  
    int i, j;  
    int ln;  
    int sw = 0;  
    int back;  
    while (scanf("%d %d\n", &i, &j) != EOF)  
    {  
        printf("%d\n", i + j);  
    }  
}  