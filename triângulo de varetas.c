#include <stdio.h>

int main() {
    int v1, v2, v3, soma1 = 0, soma2 = 0, soma3 = 0;
    scanf("%d %d %d", &v1, &v2, &v3);
    soma1 = v1 + v2, soma2 = v2 + v3 , soma3 = v3 + v1;

    if (v1 > soma2 || v2 > soma3 || v3 > soma1) {
        printf("False\n");
    } else {
        printf("True\n");
    }
    return 0;
}