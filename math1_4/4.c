#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int i, j, k;
    float ln;
    int sw = 0;
    int back;
    int r;
    int q;
    scanf("%d %d \n", &i, &j);

    printf("%d+%d=%d\n", i, j, i + j);
    printf("%d*%d=%d\n", i, j, i * j);

    printf("%d-%d=%d\n", i, j, i - j);
    r = i % j;
    if (r >= 0)
    {
        printf("%d/%d=%d...%d\n", i, j, i / j, r);
    }
    else
    {
        int q = i / j;
        if (q < 0)
            q -= 1;
        else
            q += 1;

        r = i - j * q;
        printf("%d/%d=%d...%d\n", i, j, q, r);
    }
}