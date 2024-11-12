#include <stdio.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64 + 1
/**
 * @brief Função de separação de palavras de acordo com a uma lista de separadores.
 * Exemplo de chamada da função:
 * str_split("Ola mundo! 1,23", m, ", .!?");
 *
 * O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
 * ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
 *
 * @param str ponteiro para o início da string original
 * @param m matriz de caracteres, sendo cada linha uma palavra da string original
 * @param sep string com a lista de caracteres separadores
 * @return int quantidade de palavras detectadas
 */
int str_split(char *str, char m[][MAX_WORD_LEN], char *sep) {
  char palavra[MAX_WORD_LEN];
  int contadores[MAX_WORDS];
  int iContadores = 0, maiorCount = 0;
  int i, k, countPalavra = 0, vPalavras = 0, count;

  for (i = 0; str[i] != '\0'; i++) {
    int achou = 0;

    for (k = 0; sep[k] != '\0'; k++) {
      if (str[i] == sep[k]) {
        achou = 1;
        break;
      }
    }

    // Garante que a ultima palavra seja verificada
    if (achou || str[i + 1] == '\0') {
      if (achou && countPalavra == 0) {
        continue;
      }

      if (str[i + 1] == '\0' && !achou) {
        palavra[countPalavra] = str[i];
        countPalavra++;
      }

      palavra[countPalavra] = '\0';
      if (countPalavra > 0) {
        strcpy(m[vPalavras], palavra);
        vPalavras++;
        countPalavra = 0;
      }
    } else {
      palavra[countPalavra] = str[i];
      countPalavra++;
    }
  }

  for (i = 0; i < vPalavras; i++) {
    count = strlen(m[i]);

    if (i == 0) {
      maiorCount = count;
    } else {
      if (count > maiorCount) {
        maiorCount = count;
      }
    }

    contadores[iContadores] = count;
    iContadores++;

    printf("(%d)%s\n", count, m[i]);
  }

  count = 0;

  for (i = 0; i < iContadores; i++) {
    if (contadores[i] == maiorCount) {
      count++;
    }
  }

  return count;
}

int main()
{
  char str[MAX_WORDS * MAX_WORD_LEN];
  char palavras[MAX_WORDS][MAX_WORD_LEN];
  char sep[MAX_WORD_LEN];

  scanf("%[^\n]%*c", str);
  scanf("%[^\n]%*c", sep);

  printf("%d\n", str_split(str, palavras, sep));

  return 0;
}
