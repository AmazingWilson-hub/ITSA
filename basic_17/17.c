#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *getword(char *text, char *word);
int main()
{

    char *input = malloc(sizeof(char) * 1100);
    char **data_base = malloc(sizeof(char *) * 1100);
    char *ptr;
    char *word = malloc(sizeof(char) * 1100);
    int word_count = 0;
    int i, j;
    int cmp = 1;
    int sw = 0;

    while (fgets(input, 1100, stdin) != NULL)
    {

        ptr = input;

        while ((ptr = getword(ptr, word)) != NULL)
        {

            for (i = 0; i < strlen(word)+1; i++)
            {
                if (*(word + i) >= 'A' && *(word + i) <= 'Z')

                {

                    *(word + i) = *(word + i) + 32;
                }
            }

            for (i = 0; i < word_count; i++)
            {
                cmp = strcmp(*(data_base + i), word);
                if (cmp == 0)
                {
                    sw = 1;
                    break;
                }
            }
            if (sw == 0)
            {
                *(data_base + word_count) = malloc(sizeof(char) * 110);
                strcpy(*(data_base + word_count), word);
                word_count++;
            }
        }
    }
    for (i = 0; i < word_count; i++)
    {
        if (i == word_count - 1)
        {
            printf("%s\n", *(data_base + i));
        }
        else
        {
            printf("%s ", *(data_base + i));
        }
    }
}

char *getword(char *text, char *word)
{

    char *ptr, *qtr; //char *(定義一個變數ptr來存放變數的地址)
    ptr = text;      //把line的地址存放到ptr裡面

    while (*ptr == ' ')
    {
        ptr++; //ptr位置++,因為line的記憶體位置是連續的,所以可以直接用++
    }
    qtr = word; //把word的地址存放到qtr裡面
    while (*ptr != ' ' && *ptr != '\0' && !(*ptr == '\r' && *(ptr + 1) == '\n') && *ptr != '\n')
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