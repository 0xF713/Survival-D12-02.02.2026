#include <stdio.h>

int max(int a, int b) { return (a > b) ? a : b; }

int main() {
    int a = 0, b = 0;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("n/a");
        return 0;
    } else
        printf("%d", max(a, b));

    return 0;
}