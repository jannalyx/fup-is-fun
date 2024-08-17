#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num % 7 == 0 ) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}