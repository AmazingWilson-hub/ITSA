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
        for (i = 1; i <= input; i++)
        {
            printf("%d*%d=%d\n", i, i, i * i);
        }
    }
}