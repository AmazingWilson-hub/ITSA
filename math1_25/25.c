#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    int i;
    int result = 0;

    while (scanf("%d", &input) != EOF)
    {
        for (i = 0; i <= input; i++)
        {
            if (i % 3 == 0)
            {
                result = result + i;
            }
        }
        printf("%d\n", result);
        result = 0;
    }
}