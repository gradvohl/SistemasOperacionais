# Informações sobre os projetos para Sistemas Operacionais
Este é o repositório padrão para a disciplina Sistemas Operacionais, oferecida na [Faculdade de Tecnologia](http://www.ft.unicamp.br) da [UNICAMP](http://www.unicamp.br). Nesse repositório estão as informações gerias sobre os projetos a serem desenvolvidos na disciplina e alguns códigos fonte básicos que os estudantes devem usar nos seus projetos.

## Informações gerais sobre os projetos
Um projeto será desenvolvido em grupos de, **no máximo**, 3 estudantes que podem se agrupar livremente. São dois os projetos propostos na disciplina. 

A escolha do projeto que o grupo de estudantes desenvolverá é determinado pela soma do último dígito do RA (número de matrícula) de cada membro do grupo. Se a soma desses dígitos resultar em um número ímpar, então o grupo deve fazer o [Projeto 1](Projeto1.md); se resultar em um número par, o grupo deverá fazer o [Projeto 2](Projeto2.md).

### Entrega dos projetos
Os resultados dos projetos devem ser entregues até as **23h55 do dia da aula anterior à aula da 2ª prova**. Esses resultados e toda a documentação devem estar em um repositório no [GitHub](https://github.com) ou no [BitBucket](http://bitbucket.org).

Os estudantes devem fornecer as seguintes informações até a 3ª (terceira) aula por email -- exclusivamente -- com o seguinte conteúdo:
* Assunto do email: "[TT304] Definição da equipe para projeto de SO"
* Nome do grupo;
* Nome de cada um dos componentes do grupo e seus respectivos números de matrícula.
* Projeto a ser desenvolvido (1 ou 2).

_**IMPORTANTE**_: A definição dos componentes da equipe deve acontecer até a 3ª semana letiva de aula. Após esse prazo, para cada semana de atraso na definição de equipes será descontado um ponto na nota do trabalho de cada aluno.

### Plágio
:no_entry_sign: _**O plágio é condenável!**_: Qualquer forma de plágio, independentemente da quantidade de linhas, acarretará em zero no item de avaliação em que foi detectado o plágio para todos os envolvidos, sem distinção entre plagiador e plagiado.

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

## Projetos
A breve descrição dos projetos está a seguir. Clique nos projetos para ir direto às respectivas descrições:
* [Projeto 1](Projeto1.md): "Merge and sort".
* [Projeto 2](Projeto2.md): "Build matrix".

# Discussão sobre a alocação dinâmica de Matrizes
:bulb:No site [alocaMatrizes](https://gradvohl.github.io/alocaMatrizes), há uma breve discussão sobre estratégias para alocação de matrizes em programas na linguagem C. Recomenda-se a leitura atenta :eyes:.
