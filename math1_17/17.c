#include <stdio.h>

#define BUF_SIZE 4096

int gcd(int x, int y);

int main() {
    int x, y;
    while (scanf("%d%d", &x, &y) > 0) {
        if (x == 0 && y == 0)
            return 0;
        else if (x <= 0 || y <= 0)
            continue;

        printf("%d\n", gcd(x, y));
    }
}

int gcd(int x, int y) {
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
