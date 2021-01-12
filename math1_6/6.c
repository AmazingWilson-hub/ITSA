#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    double result;
    while (scanf("%d", &input) != EOF)
    {
        printf("%.1f\n", ((double)input) * 1.6);
    }
}