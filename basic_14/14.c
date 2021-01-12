#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    int i, j;
    char *ptr = malloc(sizeof(char) * 1024);
    int ln;
    int sw = 0;
    while (scanf("%d", &input) != EOF)
    {
        // printf("%d\n", input);
        sprintf(ptr, "%d", input);
        ln = strlen(ptr);
        // printf("%d\n", ln);
        for (i = 0, j = ln; i < j; i++, j--)
        {
            if (*(ptr + i) != *(ptr + j - 1))
            {
                sw = 1;
            }
        }
        if (sw == 1)
        {
            printf("NO\n");
        }
        else if (sw == 0)
        {
            printf("YES\n");
        }
        sw = 0;
        memset(ptr, '\0', 1024);
    }
}