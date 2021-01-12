#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int start_hour;
    int start_minute;
    int end_hour;
    int end_minute;
    double i;
    double stay_time;
    int pay = 0;
    scanf("%d%d%d%d", &start_hour, &start_minute, &end_hour, &end_minute);
    if (end_hour - start_hour > 0)
    {
        if (end_minute - start_minute > 0 && end_minute - start_minute < 30)
        {
            stay_time = end_hour - start_hour;
        }
        else if (end_minute - start_minute > 0 && end_minute - start_minute > 30)
        {
            stay_time = end_hour - start_hour;
            stay_time = stay_time + 0.5;
        }
        else if (end_minute - start_minute == 0)
        {
            stay_time = end_hour - start_hour;
        }
        else if (end_minute - start_minute < 0)
        {
            stay_time = end_hour - start_hour;
            stay_time = stay_time - 0.5;
        }
    }
    else if (end_hour - start_hour == 0)
    {
        if (end_minute - start_minute > 0 && end_minute - start_minute < 30)
        {
            stay_time = 0;
        }
        else if (end_minute - start_minute > 0 && end_minute - start_minute > 30)
        {
            stay_time = 0.5;
        }
        else if (end_minute - start_minute == 0)
        {
            stay_time = 0;
        }
    }

    if (stay_time > 0)
    {
        for (i = 0; i < stay_time; i = i + 0.5)
        {
            // printf("%f\n", i);
            if (i < 2)
            {
                pay = pay + 30;
                // printf("2\n");
            }
            else if (i >= 2 && i < 4)
            {
                pay = pay + 40;
                // printf("4\n");
            }
            else
            {
                pay = pay + 60;
                // printf("6\n");
            }
        }
        printf("%d\n", pay);
    }
    else
    {
        printf("0\n");
    }
}