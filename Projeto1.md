# Projeto 1 -- "Divide Matriz"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas threads para dividir uma matriz N x N (N linhas por N colunas) em outras duas matrizes também N x N de tal forma que seja composta por elementos a partir da diagonal principal e acima; e a segunda matriz com elementos abaixo da diagonal principal.

O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

## Descrição do problema a ser resolvido
Considere uma matriz N x N (N linhas por N colunas) que contém valores em ponto flutuante, positivos ou negativos. O programa deverá utilizar múltiplos threads para dividir essa matriz em outras duas conforme ilustrado na figura a seguir.

![Divisão da Matriz](/figuras/DivideMatriz.png)

A matriz original deve ser dividida em outras duas matrizes também N x N de tal forma que a primeira matriz seja composta por elementos a partir da diagonal principal e acima; e a segunda matriz com elementos abaixo da diagonal principal.

Os dados da matriz original devem vir de um arquivo e as matrizes resultantes devem ser gravadas em arquivos com as extensões diag1 para os dados da primeira matriz e diag2 para os dados da segunda matriz.

O programa deve ser testado para 2, 4, 8 e 16 threads, com matrizes 1000 x 1000.

## Entradas e saídas de valores para o programa
**Entradas**: os valores N, T e Arquivo -- respectivamente, as dimensões da matriz (N x N); o número de threads; e o arquivo onde estão os dados -- devem ser informados pelo usuário no início do programa. Para os testes, considere valores grandes (maiores ou iguais a 100) para N.

**Saídas**: Arquivos com as matrizes diagonal superior e diagonal inferior. Os arquivos gerados devem ter o mesmo nome do arquivo original e as extensões `diag1` para a primeira matriz e `diag2` para a segunda matriz.

Como sugestão, construa o programa de modo que os valores de entrada sejam lidos da linha de comando. Por exemplo:

```shell
./divideMat 1000 16 matriz.dat
```

Onde:
*	`./divideMat` é o nome do programa; 
*	`1000` é a dimensão da matriz (1000 x 1000);  
*	`16` é o número de threads; e 
*	`matriz.dat` é o arquivo que contém os dados da matriz.

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
