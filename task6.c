#include <stdio.h>

int main () {
    int num, summ = 0;
    printf("n= "); scanf("%d", &num);
    while (summ != num*10) {
        int i;
        for (i = 0; i < num; i++) {
            printf("%d\t", i+summ);
        }
        printf("\n");
        summ += 10;
    }
}