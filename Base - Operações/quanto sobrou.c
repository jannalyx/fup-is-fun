#include <stdio.h>

int main() {
    int qntdP1, qntdP2, qntdP3;
    float valorP1, valorP2, valorP3, qntdDinheiro, total = 0, sobrou = 0;
    scanf("%d %d %d", &qntdP1, &qntdP2, &qntdP3);
    scanf("%f %f %f", &valorP1, &valorP2, &valorP3);
    scanf("%f", &qntdDinheiro);


    total = (qntdP1 * valorP1) + (qntdP2 * valorP2) + (qntdP3 * valorP3);
    sobrou = qntdDinheiro - total;
    printf("%.2f", sobrou);

    return 0;
}