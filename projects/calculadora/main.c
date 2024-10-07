#include <stdio.h>
#include <math.h>

// 1 - ARITMÉTICO
// 2 - RELACIONAL
// 3 - LÓGICOS

int identificaOperador(char op) {
  switch (op) {
    case '+': 
    case '-': 
    case '*': 
    case '/': 
    case '%': 
    case '~':
      return 1;

    case '=': 
    case '!': 
    case '<': 
    case '>':
      return 2; 

    case '^': 
    case 'v': 
    case 'x':
      return 3;
  }
}

void printIntOuDouble(double x) {
  long int intX = (int) x;

  if (intX == x) {
    printf("%ld\n", intX);
  } else {
    printf("%.1f\n", x);
  }
}

void calculaRelacoes(char op, double x, double y) {
  if (op == '=') {
    if (x == y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  } else if (op == '<') {
    if (x < y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  } else if (op == '>') {
    if (x > y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  } else if (op == '!') {
    if (x != y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  }
}

void calculaAritmetica(char op, double x, double y) {
  switch (op) {
    case '+':
      double soma = x + y;
      printIntOuDouble(soma);
      break;

    case '-':
      double sub = x - y;
      printIntOuDouble(sub);
      break;

    case '*':
      double mult = x * y;
      printIntOuDouble(mult);
      break;

    case '/':
      if (y == 0) {
        printf("Divisao por zero nao existe\n");
      } else {
        double div = x / y;
        printIntOuDouble(div);
      }
      break;

    case '%':
      int rest = (int) x % (int) y;
      printf("%d\n", rest);
      break;
    
    case '~':
      unsigned long int pot = pow(x, y);
      printf("%ld\n", pot);
      break;
  }
}

void calculaLogica(char op, double x, double y) {
  if (op == '^') {
    if (x && y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  } else if (op == 'v') {
    if (x || y) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  } else if (op == 'x') {
    if ((x || y) && (x != y)) {
      printf("true\n");
    } else {
      printf("false\n");
    }
  }
}

int main() {
  double x, y;
  char op;

  scanf("%lf%c%lf", &x, &op, &y);

  int opIdentificado = identificaOperador(op);

  switch (opIdentificado) {
    case 1:
      calculaAritmetica(op, x, y);
      break;
    case 2:
      calculaRelacoes(op, x, y);
      break;

    case 3:
      calculaLogica(op, x, y);
      break;
  }

  return 0;
}