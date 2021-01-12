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
    int check[128];
    int sw = 1;
    for (i = 0; i < 128; i++)
    {
        check[i] = 0;
    }
    scanf("%d", &count);
    i = 0;
    while (scanf("%d", &input) != EOF)
    {
        check[input - 1] = check[input - 1] + 1;
    }
    for (i = 0; i < 128; i++)
    {
        
        if (check[i] >1)
        {
            sw = 0;
            break;
        }
    }
    printf("%d\n", sw);
}
