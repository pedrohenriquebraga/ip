#include <stdio.h>

int main() {

    unsigned long int lucro10 = 0, lucro1020 = 0, lucroMais20 = 0, maisVendida = 0, codMaisVendido = 0, codMaisLucro = 0;
    unsigned long int cod, vendas;
    float valorCompra, valorVenda, maiorLucro, percentLucro = 0, totalCompra = 0, totalVenda = 0;


    while (scanf("%ld %f %f %ld", &cod, &valorCompra, &valorVenda, &vendas) != EOF) {

        float lucro = ((valorVenda - valorCompra) / valorCompra) * 100;

        if (vendas > maisVendida) {
            maisVendida = vendas;
            codMaisVendido = cod;
        }

        if (lucro > maiorLucro) {
            maiorLucro = lucro;
            codMaisLucro = cod;
        }

        if (lucro > 20) {
            lucroMais20++;
        } else if (lucro >= 10 && lucro1020 <= 20) {
            lucro1020++;
        } else {
            lucro10++;
        }

        totalCompra += valorCompra * vendas;
        totalVenda += valorVenda * vendas;        
    }

    percentLucro = ((totalVenda - totalCompra) / totalCompra) * 100;


    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %ld\n", lucro10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %ld\n", lucro1020);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %ld\n", lucroMais20);
    printf("Codigo da mercadoria que gerou maior lucro: %ld\n", codMaisLucro);
    printf("Codigo da mercadoria mais vendida: %ld\n", codMaisVendido);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", totalCompra, totalVenda, percentLucro);

    return 0;
}