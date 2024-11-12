#include <stdio.h>

int main() {
    double sal, kw;
    double perKW;

    scanf("%lf", &sal);
    scanf("%lf", &kw);

    perKW = sal * 0.7 / 100;

    printf("Custo por kW: R$ %.2lf\n", perKW);
    printf("Custo do consumo: R$ %.2lf\n", perKW * kw);
    printf("Custo com desconto: R$ %.2lf", (perKW * kw) - (perKW * kw * 0.1));

    return 0;
}