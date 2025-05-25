#include <stdio.h>

int main() {
    double cels;
    scanf("%lf", &cels);

    double fahre = cels * 1.8 + 32;
    printf("%.6f", fahre);

    return 0;
}