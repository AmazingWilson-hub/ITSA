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
    int check[26];
    int sw = 1;
    int ln = 0;
    int idx = 0;
    char *in = malloc(sizeof(char) * 1024);
    for (i = 0; i < 26; i++)
    {
        check[i] = 0;
    }

    i = 0;
    ln = strlen(in);
    fgets(in, 1024, stdin);
    for (i = 0; i < 26; i++)
    {
        if (isupper(*(in + i)))
        {
            idx = *(in + i) - 'A';
            check[idx]++;
        }

        else
        {
            idx = *(in + i) - 'a';
            check[idx]++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (i == 25)
        {
            printf("%d\n", check[i]);
        }
        else
        {
            printf("%d ", check[i]);
        }
    }
}
