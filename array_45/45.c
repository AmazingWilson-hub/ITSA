#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *input = malloc(sizeof(char) * 1024);
    int ln = 0;
    while (fgets(input, 1024, stdin) != NULL)
    {
        ln = strlen(input);
        printf("There are %d characters", ln - 1);
    }
}