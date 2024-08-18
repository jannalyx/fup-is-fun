#include <stdio.h>

int main() {
    int n1, n2, quoc, rest;
    scanf("%d %d", &n1, &n2);

    quoc = n1 / n2 , rest = n1 % n2;
    printf("%d %d", quoc, rest);
    
    return 0;
}