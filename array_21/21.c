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

    int sw = 1;
    int ln = 0;
    int idx = 0;
    char *in = malloc(sizeof(char) * 1024);
    int chinese, english, math;
    int mc = 0, me = 0, mm = 0;

    scanf("%d", &count);
    while ((scanf("%d%d%d", &chinese, &english, &math) != EOF )&& i < count)
    {

        mc = mc + chinese;
        me = me + english;
        mm = mm + math;
        i++;
    }

    printf("%.1f %.1f %.1f %.1f\n", (double)(mc + me + mm) / (3 * count), (double)mc / count, (double)me / count, (double)mm / count);
}
