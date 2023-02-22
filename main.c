#include <stdio.h>
#define l 24
#define c 27

/* Grupo:
Aluno 1: Douglas Lopes
Aluno 2: Gabriel Assis
*/

int main(void) {
  int i, j;

  int janeiro[l][c] = {{40, 40, 36, 36, 40, 36, 36, 40, 40, 40, 40, 36, 36, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40,
                        40, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 40, 40, 40, 73, 40, 36, 40, 40, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 36, 40, 40, 40, 40, 40, 36, 36, 40, 40, 40, 36,
                        40, 40, 40, 40, 40, 40, 40, 40, 36, 40, 40, 40, 40},
                       {40, 40, 40, 40, 40, 40, 40, 36, 36, 40, 36, 36, 36, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 36, 36, 40, 40, 40, 40, 40, 40, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 40, 36, 40, 40, 40, 40, 41, 40, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 41, 40, 36, 36, 40, 40, 40, 40, 36, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 36, 40, 40, 40, 40, 36, 36, 36, 40, 36, 36, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 36, 40, 36, 40, 40, 36, 40, 40, 40, 40, 40, 40, 40,
                        36, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 40, 36, 40, 40, 36, 40, 40, 40, 40, 36,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {36, 40, 40, 40, 36, 40, 40, 36, 36, 40, 40, 40, 40, 36,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {36, 40, 40, 40, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {36, 36, 40, 40, 36, 40, 40, 40, 40, 40, 36, 40, 40, 40,
                        36, 36, 36, 36, 36, 36, 36, 36, 36, 40, 40, 40, 40},
                       {40, 36, 40, 40, 40, 40, 40, 40, 40, 4,  36, 36, 36, 36,
                        36, 36, 36, 40, 40, 40, 40, 36, 36, 40, 40, 40, 40},
                       {40, 36, 36, 40, 40, 40, 40, 40, 40, 36, 36, 36, 36, 36,
                        36, 40, 40, 40, 40, 40, 40, 36, 36, 40, 40, 40, 40},
                       {36, 36, 36, 40, 40, 40, 36, 40, 40, 40, 36, 36, 36, 36,
                        36, 40, 40, 40, 36, 36, 40, 40, 36, 40, 40, 40, 40},
                       {36, 36, 40, 40, 40, 36, 40, 40, 36, 36, 40, 40, 36, 36,
                        36, 40, 40, 36, 36, 36, 40, 40, 36, 40, 40, 40, 40},
                       {36, 36, 36, 40, 40, 36, 40, 40, 40, 40, 36, 36, 40, 40,
                        40, 36, 36, 36, 36, 36, 36, 36, 36, 40, 40, 40, 40},
                       {40, 36, 36, 40, 40, 36, 40, 40, 36, 36, 36, 36, 40, 40,
                        40, 36, 36, 36, 40, 40, 36, 36, 40, 40, 40, 40, 40},
                       {40, 40, 36, 36, 40, 40, 36, 36, 36, 36, 36, 36, 40, 40,
                        40, 40, 36, 36, 36, 40, 36, 36, 40, 40, 40, 40, 40},
                       {40, 40, 40, 40, 40, 40, 36, 36, 40, 36, 36, 36, 36, 36,
                        36, 36, 36, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 73, 41, 36, 40, 40, 40, 40, 40, 36, 40, 40, 40, 40,
                        40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40},
                       {40, 40, 40, 36, 40, 40, 40, 40, 40, 40, 40, 40, 36, 36,
                        36, 36, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40}};

  int fevereiro[l][c] = {
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {4,  4,  4,  36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {40, 40, 40, 40, 40, 40, 36, 36, 36, 36, 36, 36, 36, 36,
       36, 40, 40, 40, 36, 36, 36, 36, 36, 36, 36, 36, 36},
      {109, 109, 109, 109, 109, 109, 72, 40, 72, 72, 72, 72, 40, 40,
       40,  73,  105, 73,  40,  36,  36, 40, 40, 40, 36, 36, 36},
      {141, 141, 141, 141, 141, 109, 72, 72, 72, 72, 72, 72, 40, 40,
       40,  73,  109, 73,  40,  36,  36, 40, 40, 40, 36, 36, 36},
      {109, 109, 109, 109, 109, 109, 72, 40, 72, 72, 72, 72, 40, 40,
       40,  73,  109, 73,  40,  36,  36, 40, 40, 40, 36, 36, 36},
      {109, 109, 109, 141, 141, 109, 72, 40, 72, 72, 72, 72, 40, 36,
       40,  109, 109, 109, 40,  40,  40, 36, 36, 36, 36, 36, 36},
      {109, 109, 109, 141, 141, 141, 72, 40, 72, 72, 72, 72, 40, 36,
       40,  109, 109, 109, 40,  40,  40, 36, 36, 36, 36, 36, 36},
      {109, 109, 109, 109, 141, 109, 72, 40, 72, 72, 72, 72, 40, 36,
       40,  109, 109, 109, 40,  40,  40, 36, 36, 36, 36, 36, 36},
      {72, 72, 72, 72, 72, 72, 40, 40, 40, 73, 109, 73, 40, 36,
       40, 72, 72, 72, 40, 40, 40, 36, 36, 36, 36,  36, 36},
      {40, 40, 40, 72, 72, 72, 40, 36, 40, 73, 109, 73, 40, 36,
       36, 72, 72, 72, 40, 40, 40, 36, 36, 36, 36,  36, 36},
      {72, 72, 72, 72, 72, 72, 40, 40, 40, 73, 109, 73, 40, 36,
       40, 72, 72, 72, 40, 40, 40, 36, 36, 36, 36,  36, 36},
      {109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 73, 109,
       73,  40,  40,  40,  36,  36,  36,  36,  36,  36,  36,  36,  36},
      {141, 141, 141, 109, 109, 109, 109, 141, 109, 109, 109, 109, 109, 109,
       109, 40,  36,  40,  36,  36,  36,  36,  36,  36,  36,  36,  36},
      {109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 73, 109,
       73,  40,  36,  40,  36,  36,  36,  36,  36,  36,  36,  36,  36},
      {109, 109, 109, 109, 141, 109, 72, 72, 72, 40, 40, 40, 40, 40,
       40,  36,  36,  36,  40,  40,  40, 36, 36, 36, 36, 36, 36},
      {109, 109, 109, 141, 141, 109, 72, 72, 72, 40, 36, 36, 36, 36,
       36,  36,  36,  36,  40,  40,  40, 36, 36, 36, 36, 36, 36},
      {109, 109, 109, 109, 141, 109, 72, 72, 72, 40, 40, 40, 36, 36,
       36,  36,  36,  36,  40,  40,  40, 36, 36, 36, 36, 36, 36}};

  int marco[l][c] = {
      {36,  36,  36,  36,  36,  36, 36, 36, 36,  36,  36,  36,  36, 109,
       109, 109, 141, 109, 109, 73, 4,  72, 145, 109, 141, 109, 109},
      {36,  36,  36,  36,  36,  36, 36, 40, 36,  36,  36,  40,  36, 72,
       141, 141, 141, 141, 145, 73, 4,  40, 108, 104, 109, 141, 145},
      {40,  36,  36,  36,  36,  40, 40, 40, 40, 36,  40,  4,   36, 109,
       145, 109, 109, 141, 141, 72, 36, 36, 72, 109, 141, 109, 76},
      {40,  36,  40,  36,  36, 36, 36, 40, 40, 40,  36,  36,  36, 72,
       109, 109, 109, 145, 77, 36, 36, 40, 76, 109, 145, 108, 72},
      {36, 36,  40, 40,  36, 36, 36, 40, 40,  40,  36,  40,  109, 109,
       76, 109, 77, 109, 40, 36, 40, 40, 109, 109, 145, 141, 109},
      {36,  36,  36,  36,  36,  36,  36, 40, 40, 40, 36,  36,  72, 108,
       109, 109, 109, 109, 109, 109, 73, 36, 40, 73, 109, 141, 109},
      {40,  36,  36,  36,  36,  36,  40, 40, 40, 36,  40,  36,  36, 109,
       145, 141, 145, 141, 145, 109, 36, 40, 72, 109, 109, 109, 109},
      {40,  36,  36,  40,  36,  36, 40, 36, 36,  36,  36,  36,  72, 109,
       109, 109, 109, 141, 109, 40, 36, 72, 109, 141, 141, 109, 72},
      {40,  40,  40,  40,  36, 36, 40, 40, 40, 40,  40,  40,  36, 77,
       141, 145, 109, 108, 36, 36, 40, 36, 72, 109, 141, 141, 109},
      {109, 109, 109, 109, 109, 109, 40, 40, 40,  72,  72,  72,  40, 36,
       109, 109, 109, 109, 72,  40,  36, 40, 109, 109, 141, 141, 145},
      {109, 109, 109, 141, 141, 141, 72, 40, 40, 72,  72,  72,  40, 73,
       109, 73,  109, 141, 145, 40,  4,  40, 72, 109, 141, 109, 109},
      {109, 109, 109, 109, 141, 109, 72, 40, 40,  72,  72,  72,  40, 109,
       113, 73,  109, 109, 109, 40,  4,  72, 109, 109, 109, 109, 40},
      {72, 104, 105, 141, 141, 141, 40, 40, 40,  72,  72,  72,  36, 40,
       72, 109, 141, 141, 104, 73,  40, 72, 145, 145, 141, 109, 109},
      {72, 104, 105, 141, 145, 141, 40, 40, 40, 72, 72,  72,  40, 40,
       76, 109, 141, 141, 109, 72,  40, 72, 73, 72, 109, 141, 109},
      {72,  72,  72,  141, 141, 141, 40, 40, 40, 72, 72,  72,  40, 72,
       109, 109, 109, 109, 72,  40,  40, 40, 72, 72, 109, 145, 109},
      {40, 40,  40,  72,  72, 72, 40, 40, 40,  72,  108, 72,  40, 36,
       40, 109, 145, 145, 40, 4,  36, 40, 109, 113, 145, 109, 40},
      {40, 40,  40,  72,  72, 72, 40, 40, 40, 72, 109, 72, 40, 36,
       40, 109, 109, 108, 40, 36, 40, 40, 40, 40, 109, 72, 36},
      {40, 40, 40,  72, 72, 72, 40, 40, 40, 72, 109, 72, 40, 36,
       77, 77, 109, 76, 40, 40, 40, 40, 36, 36, 40,  40, 36},
      {109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 73, 109,
       76,  72,  109, 109, 40,  40,  40,  40,  40,  40,  36,  40,  40},
      {109, 109, 109, 109, 109, 109, 141, 141, 141, 109, 109, 109, 109, 109,
       109, 72,  40,  109, 72,  36,  40,  40,  40,  40,  40,  40,  40},
      {109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 73, 77,
       72,  40,  36,  40,  40,  36,  72,  40,  40,  36,  40,  40,  36},
      {104, 109, 109, 109, 109, 109, 72, 40, 72, 40, 40, 40, 36, 36,
       36,  40,  40,  40,  36,  40,  40, 40, 40, 36, 40, 40, 40},
      {109, 109, 109, 141, 141, 109, 72, 40, 40, 40, 40, 40, 36, 36,
       40,  40,  40,  40,  40,  40,  72, 40, 36, 40, 36, 36, 40},
      {104, 108, 108, 109, 109, 109, 72, 40, 40, 40, 40, 40, 40, 40,
       40,  36,  36,  40,  40,  40,  72, 40, 40, 40, 40, 4,  40}};

  int nivelDesmatamento = 50, variacaoDesmatFev = 0, variacaoDesmatMar = 0;
  float qtdDesmatJan = 0, qtdDesmatFev = 0, qtdDesmatMar = 0;
  float mediaDesmatJan = 0, mediaDesmatFev = 0, mediaDesmatMar = 0;

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (janeiro[i][j] > nivelDesmatamento) {
        qtdDesmatJan++;
      }
    }
  }

  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Tarefa "
         "1~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

  printf("\n\nA quantidade de unidades desmatadas em janeiro é: %.0f unidades",
         qtdDesmatJan);
  mediaDesmatJan = (qtdDesmatJan / 648) * 100;
  printf("\nCom uma média percentual de desmatamento de %.2f%%",
         mediaDesmatJan);

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (fevereiro[i][j] > nivelDesmatamento) {
        qtdDesmatFev++;
      }
      if (fevereiro[i][j] > janeiro[i][j]) {
        variacaoDesmatFev++;
      }
    }
  }
  printf(
      "\n\nA quantidade de unidades desmatadas em fevereiro é: %.0f unidades",
      qtdDesmatFev);
  mediaDesmatFev = (qtdDesmatFev / 648) * 100;
  printf("\nCom uma média percentual de desmatamento de %.2f%%",
         mediaDesmatFev);
  printf("\nFevereito possui %d unidades mais desmatadas do que o mês anterior",
         variacaoDesmatFev);

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      if (marco[i][j] > nivelDesmatamento) {
        qtdDesmatMar++;
      }
      if (marco[i][j] > fevereiro[i][j]) {
        variacaoDesmatMar++;
      }
    }
  }
  printf("\n\nA quantidade de unidades desmatadas em março é: %.0f unidades",
         qtdDesmatMar);

  mediaDesmatMar = (qtdDesmatMar / 648) * 100;
  printf("\nCom uma média percentual de desmatamento de %.2f%%",
         mediaDesmatMar);
  printf("\nMarço possui %d unidades mais desmatadas do que o mês anterior",
         variacaoDesmatMar);

  printf("\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Tarefa "
         "2~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

  // ---------------------------------------------------

  printf("\n\t\t\t\t\t\t\t\t!!!ATENÇÃO!!!\nO gráfico abaixo aponta as unidades "
         "que tiveram desmatamento maior que 20%% em fevereiro em relação ao "
         "mês de janeiro:");
  for (i = 0; i < l; i++) {
    printf("\n");
    for (j = 0; j < c; j++) {
      if (1.2 * janeiro[i][j] < fevereiro[i][j]) {
        printf("*");
      } else {
        printf("_");
      }
    }
  }

  printf("\n\n\t\t\t\t\t\t\t\t!!!ATENÇÃO!!!\nO gráfico abaixo aponta as "
         "unidades que tiveram desmatamento maior que 20%% em março em relação "
         "ao mês de fevereiro:");
  for (i = 0; i < l; i++) {
    printf("\n");
    for (j = 0; j < c; j++) {
      if (1.2 * fevereiro[i][j] < marco[i][j]) {
        printf("*");
      } else {
        printf("_");
      }
    }
  }


  printf("\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Tarefa 3~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");







  
  return 0;
}

