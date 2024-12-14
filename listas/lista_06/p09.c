#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, itst = 1, i = 0, j = 0, count = 0;
    int *v = NULL;
    double res;

    scanf("%d%*c", &n);

    char linha[100];

    while (n > 0) {
        v = (int *) malloc(2 * sizeof(int));

        scanf("%[^\n]%*c", linha);

        while (linha[i] != '\0') {
            int numerador = 0, denominador = 0;

            while (linha[i] >= '0' && linha[i] <= '9') {
                numerador = numerador * 10 + (linha[i] - '0');
                i++;
            }

            if (linha[i] == '/') {
                i++;
            }

            while (linha[i] >= '0' && linha[i] <= '9') {
                denominador = denominador * 10 + (linha[i] - '0');
                i++;
            }

            v = (int *) realloc(v, (j + 2) * sizeof(int));
            v[j++] = numerador;
            v[j++] = denominador;
                        
            if (linha[i] == ' ' || linha[i] == '\n') {
                i++;
            }
        }

        printf("Caso de teste %d\n", itst);

        m = j / 2;

        for (i = 0; i < m * 2; i += 2)
        {
            for (j = i + 2; j < m * 2; j += 2)
            {
                int n1 = v[i];
                int d1 = v[i + 1];

                int n2 = v[j];
                int d2 = v[j + 1];

                if (n1 * d2 == n2 * d1)
                {
                    printf("%d/%d equivalente a %d/%d\n", n1, d1, n2, d2);
                    count++;
                }
            }
        }

        if (count == 0)
        {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }

        free(v);
        v = NULL;
        itst++;
        count = 0;
        n--;
        i = 0;
        j = 0;
    }

    return 0;
}