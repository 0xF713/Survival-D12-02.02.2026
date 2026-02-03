#include <math.h>
#include <stdio.h>

int main() {
    double x = 0.0;

    if (scanf("%lf", &x) != 1) {
        printf("n/a");
        return 0;
    }

    if (x == 0) {
        printf("n/a");
        return 0;
    }

    if (10 + x <= 0) {
        printf("n/a");
        return 0;
    }

    double part1 = 7e-3 * pow(x, 4);
    double part2 = ((22.8 * cbrt(x) - 1e3) * x + 3) / (x * x / 2);
    double part3 = x * pow(10 + x, 2 / x);

    double result = part1 + part2 - part3 - 1.01;

    printf("%.1f", result);
    return 0;
}