#include <stdio.h>

int main() {
    int a = 0;
    if (scanf("%d", &a) != 1) {
        printf("n/a");
        return 0;
    } else
        printf("Hello, %d!", a);
    return 0;
}