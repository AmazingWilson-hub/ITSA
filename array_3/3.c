#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int i = 0;
    int count = 0;
    int input = 0;

    while (scanf("%d", &input) != EOF && i < 6)
    {
        count = count + (input * input * input);
        i++;
    }
    printf("%d\n", count);
}

