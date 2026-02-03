#include <stdio.h>

int sum(int a, int b);
int dif(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main() {
    int a = 0, b = 0;

    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 0;
    }

    printf("%d %d %d ", sum(a, b), dif(a, b), mul(a, b));

    if (b == 0) {
        printf("n/a");
    } else {
        printf("%d", div(a, b));
    }

    return 0;
}

int sum(int a, int b) { return a + b; }

int dif(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int div(int a, int b) { return a / b; }