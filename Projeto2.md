# Projeto 2 -- “Binarização de imagens”
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas threads para Binarizar uma imagem em escala de cinza, representada em uma matriz, e a análise do desempenho desse programa com 2, 4, 8 e 16 threads. O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

##Descrição do problema a ser resolvido
Considere uma matriz M x N (M linhas, N colunas) que contém valores entre 0 (representando preto) e 255 (representando o branco). O programa deverá “binarizar” essa matriz transformando os valores que estão acima da média de valores da matriz em 1 e os valores abaixo da média de valores da matriz em zero.

O programa deve inicialmente calcular a média dos elementos da matriz e depois efetuar a binarização propriamente dita.

Importante: as matrizes e vetores do programa devem utilizar alocação dinâmica. Use a mesma quantidade de threads para as duas partes do programa, cálculo da média e binarização.

## Entradas e saídas de valores para o programa
**Entradas**: os valores M, N e T (número de threads) devem ser informados pelo usuário no início do programa. Os valores que a matriz conterá também deverão ser lidos de um arquivo que contém apenas números inteiros. Para os testes, considere valores grandes (maiores ou iguais a 100) para M e N.

**Saídas**: O vetor com o resultado deverá ser gravado em um arquivo com números inteiro apenas. 

### Detalhamento dos produtos do projeto
Os produtos que devem ser entregues como resultado do projeto são os seguintes:
1. O código fonte do programa completo, documentado e pronto para ser compilado em sistemas Linux.
2. Um relatório contendo a descrição da solução do problema (algoritmo em alto nível); gráficos com os tempos de execução do programa para 2, 4, 8 e 16 threads; e as conclusões a respeito dos resultados obtidos.

Todo o código fonte, relatório e a documentação do projeto devem estar disponíveis no repositório Git.

Para o item (1), a sugestão é a utilização de um _Makefile_ que facilite a compilação em sistemas Linux. Utilize também o comando _time_ (do Linux) para calcular o tempo total de execução.

Para o item (2), o relatório deve estar no formato PDF ou disponível no próprio servidor Git usando um arquivo na sintaxe Markdown. Outros formatos não serão aceitos.

A falta de qualquer um dos itens acarretará em nota zero nesse componente de avaliação.

