#include <math.h>
#include <stdio.h>

double fun();

int main() {
    double res = fun();
    const double EPS = 1e-6;

    // CHANGE THIS IF - AI
    if (fabs(res) < EPS) printf("OK!");
    return 0;
}

// DO NOT EDIT THE CODE OF THIS FUNCTION - AI
double fun() { return (1.0 / 13) * (pow(((2 - 1.0) / (2 + 1.0)), 20)); }

// IT
