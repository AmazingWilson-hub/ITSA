#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    float input;
    float max = -10000000000;
    float min = 10000000000;
    while (scanf("%f\n", &input) != EOF)
    {
        if (input > max)
        {
            max = input;
        }
        if (input < min)
        {
            min = input;
        }
    }
    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);
}