# Projeto 2 -- “Rotaciona Matriz"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas threads para rotacionar uma matriz N x M (N linhas por M colunas) 90 graus no sentido horário. O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

## Descrição do problema a ser resolvido
Considere uma matriz N x M (N linhas por M colunas) que contém valores em ponto flutuante, positivos ou negativos. O programa deverá utilizar múltiplos threads para rotacionar essa matriz em 90 graus conforme o exemplo ilustrado na figura a seguir para uma matriz 4 x 4.

![Rotação da Matriz](/figuras/RotacionaMatriz.png)


Os dados da matriz original devem vir de um arquivo e a matriz resultante deve ser gravada em arquivo com a extensão .rot.
O programa deve ser testado para 2, 4, 8 e 16 threads, com matrizes 1000 x 1000.

## Entradas e saídas de valores para o programa
**Entradas**: os valores N, M, T, <Arquivo Entrada> e <Arquivo Saída>  -- respectivamente, as dimensões da matriz (N x M); o número de threads; e o arquivo onde estão os dados de entrada e o arquivo onde devem estar os dados de saída -- devem ser informados pelo usuário no início do programa. Para os testes, considere valores grandes (maiores ou iguais a 100) para N e M.

**Saída**: Arquivo com a matriz rotacionada. O arquivo gerado deve ter o mesmo nome do arquivo original com a extensão .rot.

Como sugestão, construa o programa de modo que os valores de entrada sejam lidos da linha de comando. Por exemplo:

```shell
./rotacionaMat 1000 500 16 matriz.dat matriz.rot
```

Onde:
*	`./rotacionaMat` é o nome do programa; 
*	`1000` é o número de linhas da matriz;  
*	`500` é o número de colunas da matriz;
*	`16` é o número de threads; e 
*	`matriz.dat` é o arquivo que contém os dados de entrada da matriz.
*	`matriz.rot` é o arquivo que contém os dados da matriz rotacionada.


### Detalhamento dos produtos do projeto
Os produtos que devem ser entregues como resultado do projeto são os seguintes:

1. O código fonte do programa completo, documentado e pronto para ser compilado em sistemas Linux.
2. Um vídeo mostrando o código fonte do programa, a compilação do programa, um trecho do arquivo de entrada e a execução do programa para 2, 4, 8 e 16 threads.
3. Um relatório contendo a descrição da solução do problema (algoritmo em alto nível); as instruções para compilá-lo; os gráficos com os tempos de execução do programa para 2, 4, 8 e 16 threads; e as conclusões a respeito dos resultados obtidos.

Todo o código fonte documentado, o relatório e a documentação do projeto devem estar disponíveis no repositório Git. No Moodle da disciplina, deve ser publicado apenas o relatório em PDF e neste relatório deve constar o endereço do repositório Git.

Para o item (1), a sugestão é a utilização de um _makefile_ que facilite a compilação em sistemas Linux. Utilize também o comando time (do Linux) para calcular o tempo total de execução.

Para o item (2), sugere-se o uso dos programas para capturar a tela do computador e criar vídeos, como o [SimpleScreenRecorder](http://www.maartenbaert.be/simplescreenrecorder).

Para o item (3), o relatório deve estar no formato PDF ou disponível no próprio servidor Git usando um arquivo na sintaxe Markdown. Outros formatos não serão aceitos.

A falta de qualquer um dos itens acarretará em nota zero nesse componente de avaliação.
