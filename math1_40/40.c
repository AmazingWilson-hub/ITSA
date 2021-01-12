#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input, j;
    int i = 0;
    int result = 0;

    while (scanf("%d", &input) != EOF)
    {

        for (i = 1; i <= input; i++)
        {
            if (i == 1)
            {
                printf("%d", i);
                result = result + i;
            }
            else
            {
                printf(" + %d", i);
                result = result + i;
            }
        }
        printf(" = %d\n", result);
    }
}