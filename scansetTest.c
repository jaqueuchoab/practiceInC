#include <stdio.h>
void main(){
  char s1[80], s2[80];
  printf("digite o primeiro e segundo valor contendo números e letras: ");
  scanf ("%[1234567890]%s", s1, s2);
  
  printf("\nvariável 1: %s\nvariável 2: %s", s1, s2);
}