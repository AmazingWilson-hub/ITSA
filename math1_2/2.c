#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    float i, j, k;
    float ln;
    int sw = 0;
    int back;
    while (scanf("%f %f \n", &i, &j) != EOF)
    {
        ln = i * j / 2;
        printf("%.1f\n", ln);
    }
}