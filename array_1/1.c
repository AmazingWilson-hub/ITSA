#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *getword(char *input, char *word);
int main()
{
    int i;
    int count = 0;
    char *input = (char *)malloc(sizeof(char) * 1024);
    char *ptr = NULL;
    char *word = (char *)malloc(1024 * sizeof(char));
    char **base = (char **)malloc(1024 * sizeof(char *));
    for (i = 0; i < 1024; i++)
    {
        *(base + i) = (char *)malloc(1024 * sizeof(char));
    }

    while (fgets(input, 1000, stdin) != NULL)
    {
        ptr = input;
        while ((ptr = getword(ptr, word)) != NULL)
        {
            strcpy(*(base + count), word);
            count++;
        }
        count--;
        for (i = count; i >= 0; i--)
        {
            if (i == 0)
            {
                printf("%s\n", *(base + i));
            }
            else
            {
                printf("%s ", *(base + i));
            }

            memset(*(base + i), '\0', 1024);
        }
        count = 0;
    }
}

char *getword(char *input, char *word)
{

    char *ptr, *qtr; //char *(定義一個變數ptr來存放變數的地址)
    ptr = input;     //把line的地址存放到ptr裡面

    while (*ptr == ' ')
    {
        ptr++; //ptr位置++,因為line的記憶體位置是連續的,所以可以直接用++
    }
    qtr = word; //把word的地址存放到qtr裡面
    while (*ptr != ' ' && *ptr != '\0' && *ptr != '\n')
    {
        *qtr = *ptr; //把qtr的位址的值改成ptr這個位址的值
        qtr++;       //位址一直加
        ptr++;
    }
    *qtr = '\0'; //把裡面存的位址歸0

    if (strlen(word) == 0)
    {
        return NULL;
    }
    else
    {
        return ptr;
    }
}
