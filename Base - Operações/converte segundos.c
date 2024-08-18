#include <stdio.h>

int main() {
    int tempoSeg;
    scanf("%d", &tempoSeg);

    int hora = tempoSeg / 3600;
    int resto = tempoSeg % 3600;
    int min = resto / 60;
    int seg = resto % 60;

    printf("%d:%d:%d", hora, min, seg);

    return 0;
}