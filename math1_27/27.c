#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input, j;
    int i = 0;
    int result = 0;

    while (scanf("%d%d", &input, &j) != EOF)
    {
        if (input > j)
        {
            for (i = j; i <= input; i++)
            {
                result = result + i;
            }
        }
        else
        {
            for (i = input; i <= j; i++)
            {
                result = result + i;
            }
        }
        printf("%d\n", result);
        result = 0;
    }
}