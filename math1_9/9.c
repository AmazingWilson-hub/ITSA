#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input, i;
    double result;
    while (scanf("%d", &input) != EOF)
    {

        if (input > 31)
        {
            printf("Value of more than 31\n");
        }
        else
        {
            printf("%d\n", 1 << input);
        }
    }
}