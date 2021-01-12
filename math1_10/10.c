#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    float input, i;
    float result;
    while (scanf("%f", &input) != EOF)
    {

        result = input * 9 / 5 + 32;
        // result = result + 0.05;
        printf("%.1f\n", result);
    }
}