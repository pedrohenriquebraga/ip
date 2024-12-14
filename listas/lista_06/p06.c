#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[201];
  int matricula;
  int dia, mes, ano;
} Aluno;

int ComparaDataNasc(Aluno * a1, Aluno * a2) {

  if (a1 -> ano < a2 -> ano) return 1;
  else {
    if (a1 -> ano > a2 -> ano) return 0;
    else {
      if (a1->mes < a2->mes) return 1;
      else if (a1 -> mes > a2 -> mes) return 0;
      else {
        if (a1 -> dia < a2 -> dia) return 1;
        else return 0;
      }
    }
  }

}

void OrdenaAlunos(Aluno * alunos, int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (ComparaDataNasc(&alunos[i], &alunos[j])) {
        Aluno temp = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = temp;
      }
    }
  }
} 


int main() {

  int n, i;
  Aluno * alunos = NULL;
  scanf("%d", &n);

  alunos = (Aluno *) malloc(n * sizeof(Aluno));

  for (i = 0; i < n; i++) {
    scanf("%d %d %d %d %[^\n]%*c", 
      &alunos[i].matricula, 
      &alunos[i].dia, 
      &alunos[i].mes, 
      &alunos[i].ano, 
      alunos[i].nome
    );
  }

  OrdenaAlunos(alunos, n);

  for (i = 0; i < n; i++) {
    printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", alunos[i].matricula, alunos[i].nome, alunos[i].dia, alunos[i].mes, alunos[i].ano);
  }

  return 0;
}