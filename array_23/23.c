#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i = 0;
    char input[105];
    char test[105];

    scanf("%s", input);
    scanf("%s", test);
    if (strstr(test, input) == NULL)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
