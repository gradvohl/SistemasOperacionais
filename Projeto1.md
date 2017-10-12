# Projeto 1 -- "Filtro passa-baixa"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas *threads* para aplicar um filtro passa-baixa em uma imagem em escala de cinza, representada em uma matriz, e a análise do desempenho desse programa com 2, 4, 8 e 16 *threads*. 

O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

##Descrição do problema a ser resolvido
Considere uma matriz M x N (M linhas, N colunas) que contém valores entre 0 (representando preto) e 255 (representando o branco). O programa deverá aplicar um filtro passa-baixa 3 x 3 nessa matriz da seguinte forma: 
* Cada pixel na posição (x, y) da matriz será substituído pela média dos 8 pixels vizinhos, i. e. {(x-1, y-1), (x, y-1), (x+1, y-1), (x-1,y), (x+1, y), (x-1,y+1), (x-1, y+1), (x, y+1), (x+1, y+1)}.
* Considere que as posições fora da matriz não devem ser consideradas para o cálculo da média dos pixels vizinhos.
* Se a média não for um número inteiro, então o valor resultante deve desconsiderar a parte fracionária.

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

