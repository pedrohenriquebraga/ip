#include <stdio.h>

int main() {

    int num, i;

    scanf("%d%d", &num, &i);

    if (num % 2 != 0) {
        printf("O PRIMEIRO NUMERO NAO E PAR");
        return 0;
    }

    while (i > 0) {
        printf("%d ", num);
        num += 2;
        i--;
    }

    printf("\n");
    
    return 0;
}