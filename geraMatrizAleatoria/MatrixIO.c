/**
 * Conjunto de funcoes para gravar e ler uma matriz de numeros inteiros em um arquivo.
 *
 * Autor Andre Leon S. Gradvohl, Dr.
 *
 * Ultima atualizacao: Sex 13 Out 2017 19:23:49 -03
 *
 * Observacao: os nomes das funcoes estao em ingles.
 */ 
#include <stdio.h>
#include <stdlib.h>
#include "MatrixIO.h"


/**
 * Funcao para gravar uma matriz com numeros inteiros em um arquivo.
 *
 * @param mat Endereco da matriz que contem os numeros inteiros.
 * @param lines Numero de linhas da matriz.
 * @param columns Numero de colunas da matriz.
 * @param fileName Nome do arquivo onde a matriz sera gravada.
 */
void printMatrix(int *mat, unsigned int lines, unsigned int columns, char *fileName)
{
  register unsigned int i, j;
  register int value;
  FILE *arq;

  /* Se o nome do arquivo for nulo, entao imprime na saida padrao */
  if (fileName == NULL)
        arq = stdout;
  else
  {
      arq = fopen(fileName, "w");
      if (arq == NULL)
      {
        perror("I cannot open output file.\n");
        exit(EXIT_FAILURE);
      }
  }

  for (i=0; i<lines; i++)
  {
      for(j=0; j<columns; j++)
      {
          value = mat[i*columns + j];
          if (value >= 0)
            fprintf(arq, " %ld  ",value);
          else
            fprintf(arq, "%ld  ", value);
      }
      fprintf(arq, "\n");
  }

  /* Se o arquivo nao for nulo (nao for stdout), entao fecha o arquivo*/
  if (fileName != NULL)
     fclose(arq);
  return;
}

/**
 * Funcao para gravar uma matriz com numeros reais em um arquivo.
 *
 * @param mat Endereco da matriz que contem os numeros inteiros.
 * @param lines Numero de linhas da matriz.
 * @param columns Numero de colunas da matriz.
 * @param fileName Nome do arquivo onde a matriz sera gravada.
 */
void printMatrixDouble(double *mat, unsigned int lines, unsigned int columns, char *fileName)
{
  register unsigned int i, j;
  register double value;
  FILE *arq;

  /* Se o nome do arquivo for nulo, entao imprime na saida padrao */
  if (fileName == NULL)
        arq = stdout;
  else
  {
      arq = fopen(fileName, "w");
      if (arq == NULL)
      {
        perror("I cannot open output file.\n");
        exit(EXIT_FAILURE);
      }
  }
  for (i=0; i<lines; i++)
  {
      for(j=0; j<columns; j++)
      {
          value = mat[i*columns + j];
          if (value >= 0)
            fprintf(arq, " %f  ",value);
          else
            fprintf(arq, "%f  ", value);
      }
      fprintf(arq, "\n");
  }

  /* Se o arquivo nao for nulo (nao for stdout), entao fecha o arquivo*/
  if (fileName != NULL)
     fclose(arq);
  return;
}

/**
 * Funcao para ler uma matriz com numeros inteiros em um arquivo.
 *
 * @param lines Numero de linhas da matriz.
 * @param columns Numero de colunas da matriz.
 * @param fileName Nome do arquivo de onde a matriz sera lida.
 *
 * @return Ponteiro para o endereco da matriz devidamente alocada.
 */
int *readMatrix(unsigned int lines, unsigned int columns, char *fileName)
{
 register unsigned int i, j;
 int *mat;
 FILE *arq;

 /* Se o nome do arquivo for nulo, aborte o programa */
 if (fileName == NULL)
 {
        fprintf(stderr,"File name cannot be null\n");
        exit(EXIT_FAILURE);
 }
 
 arq = fopen(fileName,"r");
 if (arq == NULL)
 {
   perror("I cannot open file to read\n");
   exit(EXIT_FAILURE);
 }

 /*Aloca a matriz*/
 mat = (int *) malloc (sizeof(int) * lines * columns);

 if (mat == NULL)
 {
    perror("I cannot allocate memory\n");
    exit(EXIT_FAILURE);
 }

 for (i=0; i<lines; i++)
     for(j=0; j<columns; j++)
     {
         fscanf(arq, "%ld", &mat[i * columns + j]);
     }

 fclose(arq);
 return mat;
}

/**
 * Funcao para ler uma matriz com numeros reais de um arquivo.
 *
 * @param lines Numero de linhas da matriz.
 * @param columns Numero de colunas da matriz.
 * @param fileName Nome do arquivo de onde a matriz sera lida.
 *
 * @return Ponteiro para o endereco da matriz devidamente alocada.
 */
double *readMatrixDouble(unsigned int lines, unsigned int columns, char *fileName)
{
 register unsigned int i, j;
 double *mat;
 FILE *arq;

 /* Se o nome do arquivo for nulo, aborte o programa */
 if (fileName == NULL)
 {
        fprintf(stderr,"File name cannot be null\n");
        exit(EXIT_FAILURE);
 }

 arq = fopen(fileName,"r");
 if (arq == NULL)
 {
   perror("I cannot open file to read\n");
   exit(EXIT_FAILURE);
 }
/*Aloca a matriz*/
 mat = (double *) malloc (sizeof(double) * lines * columns);

 if (mat == NULL)
 {
    perror("I cannot allocate memory\n");
    exit(EXIT_FAILURE);
 }

 for (i=0; i<lines; i++)
     for(j=0; j<columns; j++)
     {
         fscanf(arq, "%f", &mat[i * columns + j]);
     }

 fclose(arq);
 return mat;
}

