# Projeto 2 -- “Ordenação de Alto Desempenho"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas threads para ordenar um vetor com N elementos (N > 99999) e a análise do desempenho desse programa com 2, 4, 8 e 16 threads. O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

## Descrição do problema a ser resolvido
Considere um vetor com N posições (N > 99999) que contém valores reais. O programa deverá ordenar esse vetor, com qualquer algoritmo de ordenação rápido. Por algoritmo rápido, entende-se um algoritmo de Ordem O(n x log n) ou melhor. Exemplo de algoritmos de ordem O(n x log n) são _Mergesort_, _Quicksort_, _Heapsort_.

## Entradas e saídas de valores para o programa
**Entradas**: os valores N (número de elementos no vetor) e T (número de threads) devem ser informados pelo usuário no início do programa, bem como nome do arquivo de onde virão os dados para o vetor e o nome do arquivo de saída. 

**Saída**: O vetor ordenado deverá ser gravado em um arquivo com números inteiro apenas. O nome do arquivo de saída deve ser informado na entrada do programa. 

### Detalhamento dos produtos do projeto
Os produtos que devem ser entregues como resultado do projeto são os seguintes:

1. O código fonte do programa completo, documentado e pronto para ser compilado em sistemas Linux.
2. Um vídeo mostrando o código fonte do programa, a compilação do programa, um trecho do arquivo de entrada e a execução do programa para 2, 4, 8 e 16 threads.
3. Um relatório contendo a descrição da solução do problema (algoritmo em alto nível); as instruções para compilá-lo; os gráficos com os tempos de execução do programa para 2, 4, 8 e 16 threads; e as conclusões a respeito dos resultados obtidos.

Todo o código fonte documentado, o relatório e a documentação do projeto devem estar disponíveis no repositório Git. No Moodle da disciplina, deve ser publicado apenas o relatório em PDF e neste relatório deve constar o endereço do repositório Git.

Para o item (1), a sugestão é a utilização de um Makefile que facilite a compilação em sistemas Linux. Utilize também o comando time (do Linux) para calcular o tempo total de execução.

Para o item (2), sugere-se o uso dos programas para capturar a tela do computador e criar vídeos, como o [SimpleScreenRecorder](http://www.maartenbaert.be/simplescreenrecorder).

Para o item (3), o relatório deve estar no formato PDF ou disponível no próprio servidor Git usando um arquivo na sintaxe Markdown. Outros formatos não serão aceitos.

A falta de qualquer um dos itens acarretará em nota zero nesse componente de avaliação.
