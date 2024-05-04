#include <stdio.h>
// Sonlar juftligi
int main() {
    int num;
    printf("n = "); scanf("%d", &num);

    for(int i = 0; i <= num; i++) {
        for (int j = 0; j <= num; j++) {
            printf("(%d,%d) ", i,j);
        }
        printf("\n");
    }

    return 0;
}