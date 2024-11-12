#include <stdio.h>
 
int calcula_primeiro_dv(int ns) {
    int soma = 0, peso = 9;

    while (peso >= 2) {
        int digito = ns % 10;
        soma += digito * peso;
        peso--;
        ns /= 10;
    }
    
    int resto = soma % 11;
    return resto == 10 ? 0 : resto;
}
 
int calcula_segundo_dv(int uf, int primeiro_dv) {
    int dig1_uf = uf / 10;
    int dig2_uf = uf % 10;
    
    int soma = (dig1_uf * 7) + (dig2_uf * 8) + (primeiro_dv * 9);
    
    int resto = soma % 11;
    return resto;
}
 
int main() {
    int ns, uf;
    
    scanf("%d", &ns);    
    scanf("%d", &uf);
    
    if (uf < 1 || uf > 28) {
        printf("CODIGO DA UF INVALIDO!\n");
        return 0;
    }
    
    int primeiro_dv = calcula_primeiro_dv(ns);
    int segundo_dv = calcula_segundo_dv(uf, primeiro_dv);
    
    printf("%d%02d/%02d\n", ns, uf, primeiro_dv * 10 + segundo_dv);
    
    return 0;
}