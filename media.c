#include <stdio.h>

int main() {
  char nomeAluno[21];
  float primeiraNota;
  float segundaNota;
  float media;

  printf("Digite o nome do aluno:\n");
  scanf("%s", &nomeAluno);
  printf("Digite a primeira nota:\n");
  scanf("%f", &primeiraNota);
  printf("Digite a segunda nota:\n");
  scanf("%2f", &segundaNota);
  
  media = primeiraNota + segundaNota;
  media = media/2;
  printf("A media de %s é: %.1f\n", nomeAluno, media);

  return 0;
}