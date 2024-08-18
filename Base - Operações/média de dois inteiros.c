#include <stdio.h>

int main() {
    int n1, n2;
    float media;
    scanf("%d %d", &n1, &n2);

    media = ((float)n1 + n2) / 2;
    printf("%.1f", media);

    return 0;
}