#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    while (scanf("%d\n", &input) != EOF)
    {
        if (input == 3 || input == 4 || input == 5)
        {
            printf("Spring\n");
        }
        else if (input == 6 || input == 7 || input == 8)
        {
            printf("Summer\n");
        }
        else if (input == 9 || input == 10 || input == 11)
        {
            printf("Autumn\n");
        }
        else if (input == 12 || input == 11 || input == 2)
        {
            printf("Winter\n");
        }
    }
}