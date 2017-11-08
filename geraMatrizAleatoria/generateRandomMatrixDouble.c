/**
 * Programa para gerar um arquivo com uma matriz com valores inteiros.
 *
 * Autor Andre Leon S. Gradvohl, Dr.
 *
 * Ultima atualizacao: Sex 13 Out 2017 19:23:49 -03
 *
 * Observacao: os nomes das funcoes estao em ingles.
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MatrixIO.h"

/**
 * Função para gerar um número real psuedo-aleatório entre mínimo and maximo.
 * @param min Valor mínimo.
 * @param max Valor máximo.
 * @return Número real aleatório.
 */ 
double randDouble(double min, double max) 
{ 
    if (min>max) 
        return (rand()/((double)(RAND_MAX)+1))*(min-max)+max;     
    else 
        return (rand()/((double)(RAND_MAX)+1))*(max-min)+min; 
}

/**
 * Funcao para gerar uma matriz com numeros inteiros.
 *
 * @param lines Numero de linhas da matriz.
 * @param columns Numero de colunas da matriz.
 * @param lowerLimit Valor do menor inteiro na matriz.
 * @param upperLimit Valor do maior inteiro na matriz.
 *
 * @return Ponteiro para uma matriz com lines x columns
 */ 
double *generateRandomMatrizDouble(unsigned int lines, unsigned int columns, double lowerLimit, double upperLimit)
{
 register unsigned int i, j;

 double *mat = (double *) malloc(sizeof(double) * lines * columns);

 if (mat == NULL)
 {
     perror("I cannot allocate memory\n");
     exit(EXIT_FAILURE);
     return NULL;
 }

 /* Cria a semente para a geração de numeros aleatorios.*/
 srand( time(NULL) );

 /* Preenche a matriz com numeros aleatorios entre o limite inferior e limite superior.*/
 for (i=0; i<lines; i++)
     for(j=0; j<columns; j++)
        mat[i*columns + j] = randDouble(lowerLimit, upperLimit);

 return mat;
}

int main (int argc, char **argv)
{
 unsigned int lines, columns;
 double lowerLimit, upperLimit;
 char *fileName;
 double *mat;

 /* O comando switch a seguir trata os parametros enviados pela linha de comando */
 switch(argc)
 {
     case 0:
     case 1:
     case 2:
         fprintf(stderr, "Uso:\n\t %s <numero de linhas> <numero de colunas>\n or", argv[0]);
         fprintf(stderr, "\n\t %s <numero de linhas> <numero de colunas> <output file>\n or", argv[0]);
         fprintf(stderr, "\n\t %s <numero de linhas> <numero de colunas> <minimo> <maximo>\n or", argv[0]);
         fprintf(stderr, "\n\t %s <numero de linhas> <numero de colunas> <minimo> <maximo> <arquivo de saida>\n", argv[0]);

         exit(EXIT_FAILURE);
         break;
     case 3:
         lines = atof(argv[1]);
         columns = atof(argv[2]);
         lowerLimit = -(lines*columns);
         upperLimit = (lines*columns);
         fileName = NULL;

         fprintf(stdout, "Gerando matriz %d x %d para a saida\n", lines, columns);
         break;
     case 4:
         lines = atof(argv[1]);
         columns = atof(argv[2]);
         lowerLimit = -(lines*columns); 
         upperLimit = (lines*columns);
         fileName = argv[3];

         fprintf(stdout, "Gerando matriz %d x %d para o arquivo %s\n", lines, columns, fileName);
         break;
     case 5:
         lines = atof(argv[1]);
         columns = atof(argv[2]);
         lowerLimit = atof(argv[3]);
         upperLimit = atof(argv[4]);
         fileName = NULL;

         fprintf(stdout, "Gerando matriz %d x %d  com limites [%f, %f] para saida padrao\n", 
                          lines, columns, lowerLimit, upperLimit);
         break;

    case 6:
        lines = atof(argv[1]);
        columns = atof(argv[2]);
        lowerLimit = atof(argv[3]);
        upperLimit = atof(argv[4]);
        fileName = argv[5];

        fprintf(stdout, "Gerando matriz %d x %d, com limites [%f, %f] para o arquivo %s\n",
                                 lines, columns, lowerLimit, upperLimit, fileName);
        break;
 }

 /* Cria a matriz na memoria e a preenche com valores inteiros aleatorios */
 mat = generateRandomMatrizDouble(lines, columns, lowerLimit, upperLimit);

 /* Grava a matriz no arquivo. A funcao printMatrix esta definida em outro arquivo */
 printMatrixDouble(mat, lines, columns, fileName);

 /* Libera a memoria ocupada pela matriz */
 free(mat);
 return 0;
}
