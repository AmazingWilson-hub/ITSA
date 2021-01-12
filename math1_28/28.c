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

        for (i = 7; i <= input; i++)
        {
            if (i % 35 == 0)
            {
                if (input - i < 35)
                {
                    printf("%d", i);
                }
                else
                {

                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
}