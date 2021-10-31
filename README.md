# Pong
Trabalho da disciplina MCTA008-17 Computação Gráfica
Professores:  
Harlen Batagelo (harlen.batagelo@ufabc.edu.br)
Bruno Marques (bruno.marques@ufabc.edu.br)

Alunos - RA: 
Diogo Miyake - 21048813  
Gabriel dos Santos - 11201722251  
## Introdução
A partir dos códigos do asteroids, criamos uma simplificação do jogo PONG. No jogos temos 2 jogadores que competem para não deixar a bola entrar no campo adversário, quem falhar é o perdedor.

## Funcionalidades
O jogo consiste em uma bola que inicialmente vai para a esquerda e a partir dai o jogador 1 faz com que ela bata na barra que é controlada pelas teclas w (subida) e s (descida) fazendo com que a bola seja enviada ao outro lado, o jogador 2 controla a barra da direita com as teclas seta para cima e seta pra baixo fazendo com que a barra se desloque nas devidas posições.  
O Objetivo é fazer a bola ultrapassar as barras para que o jogador ganhe. 

## Detalhes sobre o código
Temos duas classes para as barras laterais, uma classe para a bola e uma classe para o cenário. As barras laterais são instanciadas nas extremidades laterais centrada no eixo Y, a bola é instanciada no centro do cenário e é aplicada uma velocidade na direção para esquerda. Há uma função para checagem de colisões, quando a bola toca alguma extremidade lateral e está dentro do intervalo do corpo da barra, sua direção é invertida e a velocidade aponta para um angulo propocional a posição do toque na barra (toques nas extremidades do corpo da barra inclinam a direção da velocidade); quando a bola toca uma extremidade do cenário, na parte de cima ou de baixo, a direção em Y da velocidade é invertida. Há uma função que analisa a vitória checando se a bola tocou a extremidade do cenário que não seria capaz se tivesse tocado na barra. 

## Arquivos 
Os aqrquivos se encontram na pasta `pong`. 
