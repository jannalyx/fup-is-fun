#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delt, x1, x2;
    scanf("%f %f %f", &a, &b, &c);
    delt = (b * b) - 4 * (a * c);

    if (delt > 0) {
        x1 = (-b + sqrt(delt)) / (2 * a);
        x2 = (-b - sqrt(delt)) / (2 * a);
        printf("%.2f\n%.2f", x1, x2);
    } else if (delt == 0) {
        x1 = (-b + sqrt(delt)) / (2 * a);
        printf("%.2f", x1);
    } else {
        printf("Nao ha raiz real\n");
    }
    return 0;
}