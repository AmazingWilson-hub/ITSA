#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input, i;
    double result;
    while (scanf("%d%d", &input, &i) != EOF)
    {
        printf("%d\n", (input + i) * (input + i));
    }
}