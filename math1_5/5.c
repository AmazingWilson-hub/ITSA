#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    double i, j, k;
    double ln;
    int sw = 0;
    int back;
    while (scanf("%lf\n", &i) != EOF)
    {
        ln = i * i;
        ln = ln + 0.01;
        printf("%.1lf\n", ln);
    }
}