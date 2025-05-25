#include <stdio.h>

int main() {
    float n1, n2, final, mediaP = 0, mediaF = 0;
    scanf("%f %f", &n1, &n2);
    mediaP = (n1 + n2) / 2.0;
    
    if (mediaP >= 7) {
        printf("Aprovado\n");
    } else if (mediaP < 4){
        printf("Reprovado\n");
    } else if (mediaP >= 4 && mediaP <7) {
        scanf("%f", &final);
        mediaF = mediaP + final / 2;
        if (mediaF >= 5) {
            printf("Aprovado na final\n");
        } else {
            printf("Reprovado na final\n");
        }
    }
    return 0;
}