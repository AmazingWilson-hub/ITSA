#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    double j = 0;
    int i = 0;
    double result = 0;

    while (scanf("%d%lf", &input, &j) != EOF)
    {

        for (i = 1; i <= input; i++)
        {
            if (i <= 60)
            {
                result = result + j;
            }
            else if (i >= 61 && i <= 120)
            {
                result = result + (j * 1.33);
            }
            else if (i >= 121)
            {
                result = result + (j * 1.66);
            }
        }

        printf("%.1lf\n", result);
        result = 0;
    }
}