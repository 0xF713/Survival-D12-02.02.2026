#include <stdio.h>

int main() {
    double y = 0.0, x = 0.0;

    if (scanf("%lf %lf", &y, &x) != 2) {
        printf("n/a");
        return 0;
    }

    if (x * x + y * y < 25.0) {
        printf("GOTCHA");
    } else {
        printf("MISS");
    }
    return 0;
}