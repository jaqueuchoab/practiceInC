#include <stdio.h>

void main(){
  char nome[21], hora[5], minuto[5];

  //pedindo a informação da primeira variável
  printf("Informe seu primeiro nome:\n");
  scanf("%s", nome);
  
  //pedindo a informação da segunda variável
  printf("Informe a hora atual, seguindo a formatação-> (horas:minutos):\n");
  scanf("%[^:]%s", hora, minuto);

  //'escondendo' os :
  minuto[0] = ' ';

  //exibindo a informação para o Usuário
  printf("Olá, %s!\nVocê informou que são %s horas e%s minutos.\nObrigada!\n", nome, hora, minuto);
}