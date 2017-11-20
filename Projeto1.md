# Projeto 1 -- "Localiza na Matriz"
## Objetivo
Este projeto visa a criação de um programa que utilize múltiplas *threads* para procurar um determinado valor em uma matriz M x N (com M linhas e N colunas) e a análise do desempenho desse programa com 2, 4, 8 e 16 *threads*. 

O programa deverá ser escrito para o sistema operacional Linux e obrigatoriamente utilizar a biblioteca POSIX Threads.

## Descrição do problema a ser resolvido
Considere uma matriz M x N (M linhas, N colunas) que contém valores em ponto flutuante, positivos ou negativos. O programa deverá utilizar múltiplos *threads* para encontrar um determinado valor nessa matriz.

O programa deverá considerar os seguintes fatos:
* A matriz contém números reais, aleatórios, não ordenados.
* A matriz pode ter valores repetidos. Nesse caso, todas as posições em que o elemento ocorrer devem ser apontadas na saída do programa.
* Pode ser que o elemento não conste da matriz.

## Entradas e saídas de valores para o programa
**Entradas**: os valores M, N, T, V -- respectivamente, número de linhas; número de colunas; número de threads; e o valor a ser buscado -- devem ser informados pelo usuário no início do programa, bem como o arquivo onde estão os dados (valores) da matriz. Para os testes, considere valores grandes (maiores ou iguais a 100) para M e N.

**Saídas**: as posições (linha e coluna) onde está cada elemento encontrado, ordenadas de acordo com a posição na matriz; ou uma mensagem informando que o elemento não foi encontrado, 

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

