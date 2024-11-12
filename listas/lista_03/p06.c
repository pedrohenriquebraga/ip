#include <stdio.h>
 
double calcularRaiz(double raiz, double num) {
    return 0.5 * (raiz + ((num / raiz)));
}
 
double calcularErro(double raiz, double num) {
    return (raiz * raiz) - num;
}
 
int main() {
 
    double raiz, num, precisao, erro, x0;
 
    scanf("%lf%lf", &num, &precisao);
 
    if (num < 0)
        return 0;
    
    x0 = 1;
    raiz = calcularRaiz(x0, num);
    erro = calcularErro(raiz, num);
 
    printf("r: %.9lf, err: %.9lf\n", raiz, erro);
 
    while (erro > precisao) {
        raiz = calcularRaiz(raiz, num);
        erro = calcularErro(raiz, num);
        printf("r: %.9lf, err: %.9lf\n", raiz, erro);
    }
 
    return 0;
}