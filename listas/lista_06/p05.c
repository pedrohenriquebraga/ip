#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int cod;
  float valor;
  char nome[100];
} Curso;

typedef struct
{
  char nome[500];
  int cod_curso;
  int cred;
} Aluno;

int main()
{

  int n, m, i, j;
  Curso *cursos = NULL;
  Aluno *alunos = NULL;

  scanf("%d%*c", &n);

  cursos = (Curso *)malloc(n * sizeof(Curso));

  for (i = 0; i < n; i++)
  {
    scanf("%d %f %[^\n]%*c", &cursos[i].cod, &cursos[i].valor, cursos[i].nome);
  }

  scanf("%d%*c", &m);
  alunos = (Aluno *)malloc(m * sizeof(Aluno));

  for (i = 0; i < m; i++)
  {
    scanf("%[^\n]%*c", alunos[i].nome);
    scanf("%d%d%*c", &alunos[i].cod_curso, &alunos[i].cred);
  }

  for (i = 0; i < m; i++)
  {
    Curso curso;

    for (j = 0; j < n; j++)
    {
      if (cursos[j].cod == alunos[i].cod_curso)
      {
        curso = cursos[j];
        break;
      }
    }

    printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", alunos[i].nome, curso.nome, alunos[i].cred, curso.valor, alunos[i].cred * curso.valor);
  }

  free(alunos);
  free(cursos);

  return 0;
}