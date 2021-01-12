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
    while (scanf("%f %f %f\n", &i, &j, &k) != EOF)
    {
        ln = ((i + j) * k) / 2;
        printf("Trapezoid area:%.1f\n", ln);
    }
}