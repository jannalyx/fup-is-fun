#include <stdio.h>

int main() {
    int num1, num2, result;
    char operador;
    scanf("%d %d %c", &num1, &num2, &operador);

    if (operador == '+') {
        result = num1 + num2;
    } else if (operador == '-') {
        result = num1 - num2;
    } else if (operador == '*') {
        result = num1 * num2;
    } else if (operador == '/') {
        result = num1 / num2;
    } else {
        printf("Operador Invalido\n");
        return 1;
    }
    printf("%d",result);
    return 0;
}