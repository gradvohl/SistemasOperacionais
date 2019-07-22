# Projeto 1 -- "Merge and sort"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas threads para ler valores inteiros de N arquivos de entrada e armazenar em ordem crescente em um único arquivo de saída. Os dados dos arquivos de entrada não estão ordenados.

O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

## Descrição do problema a ser resolvido
Considere que existem N arquivos de entrada com diferentes quantidades de valores inteiros não ordenados e que podem ser repetidos ou não. O programa deverá ler os valores inteiros desses vários arquivos e, de forma ordenada, armazená-los em um arquivo de saída.

O programa deve ser testado para 2, 4, 8 e 16 threads, com arquivos com diferentes quantidades de números inteiros.

## Entradas e saídas de valores para o programa
**Entradas**: O número de threads que o programa deve utilizar, os nomes dos arquivos de entrada e o nome do arquivo de saída. Para os testes, considere pelo menos 5 arquivos com 1000 valores cada.

**Saídas**: Arquivo com os valores ordenados.

Como sugestão, construa o programa de modo que os valores de entrada sejam lidos da linha de comando. Por exemplo:

```shell
./mergesort 4 arq1.dat arq2.dat arq3.dat –o saida.dat
```

Onde:
*	`./mergesort` é o nome do programa; 
*	`4` é o número de threads;
* `arq1.dat arq2.dat arq3.dat`são os arquivos com dados de entrada; e 
*	`saida.dat` é o arquivo que contém os dados de saída.

### Detalhamento dos produtos do projeto
Os produtos que devem ser entregues como resultado do projeto são os seguintes:
1. O código fonte do programa completo, documentado e pronto para ser compilado em sistemas Linux.
2. Um vídeo mostrando o código fonte do programa, a compilação do programa, um trecho do arquivo de entrada e a execução do programa para 2, 4, 8 e 16 threads.
3. Um relatório contendo a descrição da solução do problema (algoritmo em alto nível); as instruções para compilá-lo; os gráficos com os tempos de execução do programa para 2, 4, 8 e 16 threads; e as conclusões a respeito dos resultados obtidos.

Todo o código fonte documentado, o relatório e a documentação do projeto devem estar disponíveis no repositório Git. No Moodle da disciplina, deve ser publicado apenas o relatório em PDF e neste relatório deve constar o endereço do repositório Git. 

Para o item (1), a sugestão é a utilização de um _makefile_ que facilite a compilação em sistemas Linux. Utilize também o comando _time_ (do Linux) para calcular o tempo total de execução.

Para o item (2), sugere-se o uso dos programas para capturar a tela do computador e criar vídeos, como o [SimpleScreenRecorder](http://www.maartenbaert.be/simplescreenrecorder).

Para o item (3), o relatório deve estar no formato PDF ou disponível no próprio servidor Git usando um arquivo na sintaxe Markdown. Outros formatos não serão aceitos.

A falta de qualquer um dos itens acarretará em nota zero nesse componente de avaliação.
