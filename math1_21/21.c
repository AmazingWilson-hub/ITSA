#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input, j;
    int i = 0;
    long long result = 1;

    while (scanf("%d", &input) != EOF)
    {

        for (i = 1; i <= input; i++)
        {
            result = result * i;
        }

        printf("%lld\n", result);
        result = 1;
    }
}