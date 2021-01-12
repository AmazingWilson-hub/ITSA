#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    double result;
    while (scanf("%d", &input) != EOF)
    {
        printf("%d ", input);
        printf("%d ", input * input);
        printf("%d\n", input * input * input);
    }
}