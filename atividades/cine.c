#include <stdio.h>

typedef unsigned char bool;
typedef struct
{
	bool livre;
	char tipo_poltrona;
	char tipo_cliente;
	double valor;
} Poltrona;

#define N_FILAS 4
#define N_COLS 6
#define FALSE 0
#define TRUE 1
#define VALOR_NORMAL 7.5
#define VALOR_VIP 15.0

typedef struct
{
	Poltrona P[N_FILAS][N_COLS];
} Cine;
void cine_init(Cine *cine)
{
	int i, j;
	for (i = 0; i < N_FILAS; i++)
		for (j = 0; j < N_COLS; j++)
		{
			cine->P[i][j].livre = TRUE;
			cine->P[i][j].tipo_cliente = 'N';
			cine->P[i][j].tipo_poltrona = 'N';
			(*cine).P[i][j].valor = VALOR_NORMAL;
		}
}

void cine_print(const Cine *cine)
{
	printf("--- TELA ---\n");
	int i, j;
	for (i = 0; i < N_FILAS; i++)
	{
		for (j = 0; j < N_COLS; j++)
		{
			if (cine->P[i][j].livre)
			{
				if (cine->P[i][j].tipo_poltrona == 'P')
					printf("\033[1;34mP \033[m");
				else if (cine->P[i][j].tipo_poltrona == 'V')
					printf("\033[1;33mV \033[m");
				else
					printf("\033[1;32mo \033[m");
			}
			else
			{
				printf("\033[1;31mx \033[m");
			}
		}
		printf("\n");
	}
}

void cine_define_vip(Cine *cine)
{
	// setar o atributo tipo_poltrona para 'V'

	int col;

	for (col = 0; col < N_COLS; col++)
	{
		if (col > 0 && col + 1 < N_COLS)
		{
			cine->P[1][col].tipo_poltrona = 'V';
			cine->P[1][col].valor = VALOR_VIP;
		}
	}
}
void cine_define_preferencial(Cine *cine, char fila)
{
	int col;
	for (col = 0; col < N_COLS; col++)
	{
		cine->P[fila - 'A'][col].tipo_poltrona = 'P';
	}
}

void cine_libera_poltrona(Cine *cine, char fila, int col)
{
	fila = fila - 'A';

	if (fila < 0 || fila > N_FILAS)
	{
		printf("\033[1;31mFileira invalida!!!\033[m\n");
		return;
	}

	if (col < 0 || col > N_COLS)
	{
		printf("\033[1;31mColuna invalida!!!\033[m\n");
		return;
	}

	cine->P[fila][col].livre = TRUE;
}

double cine_valor_reserva(Cine *cine)
{
	int l, col;
	double total = 0;

	for (l = 0; l < N_FILAS; l++)
	{
		for (col = 0; col < N_COLS; col++)
		{
			if (!(cine->P[l][col].livre))
			{
				total += (cine->P[l][col].valor);
			}
		}
	}

	return total;
}

#define RESERVAR 1
#define LIBERAR 2
#define VISUALIZAR 3
#define VALOR_RESERVA 4
#define SAIR 5

int cine_menu(void)
{
	int op;
	printf(" -- MENU --\n");
	printf(" %d. Reservar poltrona\n", RESERVAR);
	printf(" %d. Liberar poltrona\n", LIBERAR);
	printf(" %d. Visualizar sala\n", VISUALIZAR);
	printf(" %d. Valor total das reservas\n", VALOR_RESERVA);
	printf(" %d. Sair\n", SAIR);
	scanf("%d%*c", &op);
	return op;
}

// Aprimorar a reserva
void cine_reservar(Cine *cine, char fila, int col)
{
	int l, c;
	if (fila == 10)
	{
		printf("Hahah vc digitou um ENTER\n\n");
	}
	l = fila - 'A';
	if (l < 0 || l > N_FILAS)
	{
		printf("\033[1;31mFileira invalida!!!\033[m\n");
		return;
	}
	if (col < 0 || col > N_COLS)
	{
		printf("\033[1;31mColuna invalida!!!\033[m\n");
		return;
	}

	if (cine->P[l][col].livre == FALSE) {
		printf("\033[1;31mPoltrona ocupada!!!\033[m\n");
		return;
	}

	if (cine->P[l][col].tipo_poltrona == 'P') {
		printf("\033[1;34mVocê reservou uma poltrona preferencial. Certifique-se que você está no grupo de pessoas que podem utilizar este assento.\033[m\n");
	}

	cine->P[l][col].livre = FALSE;
}

int main()
{
	char fila;
	int col;
	int op;
	Cine Kinoplex;
	cine_init(&Kinoplex);
	cine_define_preferencial(&Kinoplex, 'A');
	cine_define_vip(&Kinoplex);

	while (1)
	{
		op = cine_menu();
		switch (op)
		{
		case RESERVAR:
			printf("VALOR DOS INGRESSOS:\n\033[1;32mNormal: R$ %.2lf\033[m\n\033[1;33mVIP: R$ %.2lf\n\033[mEntre com a fila [A-D] e a coluna [0-%d]:", VALOR_NORMAL, VALOR_VIP, N_COLS - 1);
			scanf("%c%*c%d", &fila, &col);
			cine_reservar(&Kinoplex, fila, col);
			break;
		case VISUALIZAR:
			cine_print(&Kinoplex);
			break;
		case LIBERAR:
			printf("Entre com a fila [A-D] e a coluna [0-%d]:", N_COLS - 1);
			scanf("%c%*c%d", &fila, &col);
			cine_libera_poltrona(&Kinoplex, fila, col);
			break;
		case VALOR_RESERVA:
			double valor = cine_valor_reserva(&Kinoplex);

			printf("\033[1:32mO valor total em reservas é de R$ %.2lf\033[m\n", valor);
			break;

		case SAIR:
			return 0;
			break;

		default:
			printf("Opcao invalida ou nao implementada!!!\n");
			break;
		}
	}

	return 0;
}