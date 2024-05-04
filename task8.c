// Sonlar diaganali
#include <stdio.h>

int main () {
    int num;
    printf("n = "); scanf("%d", &num);

    for (int i = 0; i <= num; i++) {
        for (int j = 0; j <= num; j++) {
            if (i == j) {
                printf("(%d,%d)", i, j);
            }
            else {
                printf("  ");
            }
        }
    printf("\n");
    }
    return 0;
}