#include <stdio.h>

int main() {

    int matricula, iProvas = 0, iListas = 0, presenca;
    double provas, listas, trabalhoFinal; // 8 provas, 5 listas

    double mediaProvas, mediaListas, nf, cargaHoraria;

    while (1) {

        scanf("%d", &matricula);

        if (matricula == -1) {
            return 0;
        }

        while (iProvas < 8) {
            double nota;

            scanf("%lf", &nota);

            provas += nota;
            iProvas++;
        }

        while (iListas < 5) {
            double nota;

            scanf("%lf", &nota);

            listas += nota;
            iListas++;
        }
    
        scanf("%lf", &trabalhoFinal);
        scanf("%d", &presenca);

        mediaProvas = provas / iProvas;
        mediaListas = listas / iListas;

        cargaHoraria = (presenca / 128.0) * 100;
        nf = (0.7 * mediaProvas) + (0.15 * mediaListas) + (0.15 * trabalhoFinal);

        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", matricula, nf);

        if (cargaHoraria < 75) {
            if (nf < 6) {
                printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
            } else {
                printf("REPROVADO POR FREQUENCIA\n");
            }
        } else {
            if (nf < 6) {
                printf("REPROVADO POR NOTA\n");
            } else {
                printf("APROVADO\n");
            }
        }

        iProvas = 0;
        iListas = 0;
        provas = 0;
        listas = 0;
    }

    return 0;
}