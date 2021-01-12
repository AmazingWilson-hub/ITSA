#include <stdio.h>
#include <stdlib.h>

int isprime(unsigned long n)
{
    unsigned long i;
    unsigned long x;

    if (n == 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (i * i > n)
            break;

        x = (n / i) * i;
        if (x == n)
            return 0;
    }
    return 1;
}

int main()
{
    unsigned long n;

    while (scanf("%lu", &n) != EOF)
    {
        if (isprime(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}