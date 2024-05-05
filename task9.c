// Teskari diaganal
#include <stdio.h>

int main () {
    int num;
    printf("num = "); scanf("%d", &num);
    int n = num; 

    for (n = num; 1 <= n; n--) { // 5
        for (int j = 0; j <= 5; j++) {
            if (n == j) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}