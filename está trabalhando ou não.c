#include <stdio.h>

int main() {
    int dia, hora;
    scanf("%d %d", &dia, &hora);

    if (dia >= 2 && dia <= 6) {
        if (hora >= 8 && hora <= 11 || hora >= 14 && hora <= 17) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else if (dia == 7) {
        if (hora >= 8 && hora <= 11) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }           
    } else {
        printf("NAO\n");
    }
    return 0;
}