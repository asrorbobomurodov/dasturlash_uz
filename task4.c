// Sonlar juftligida C harfi
#include <stdio.h>

int main () {
    int num;
    printf("n = "); scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (i == 0 || j == 0 || i == num - 1) {
                printf("(%d, %d) ", i, j);
            }
        }
    printf("\n");
    }
    return 0;
}