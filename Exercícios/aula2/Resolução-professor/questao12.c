#include <stdio.h>
int main(){  
  int num1,num2,num3;
  scanf("%d %d %d", &num1, &num2, &num3);

  // loop infinito que só será quebrado quando existir um numero diferente de todos os outros
  while(1) {
    // se num1 é diferente de todos os outros, quebre o loop infinito
    if(num1 != num2 && num1 != num3){
      printf("Jogador 1\n");
      break;
    }

    // se num2 é diferente de todos os outros, quebre o loop infinito
    if(num2 != num1 && num2 != num3){
      printf("Jogador 2\n");
      break;
    }

    // se num3 é diferente de todos os outros, quebre o loop infinito
    if(num3 != num1 && num3 != num2){
      printf("Jogador 3\n");
      break;
    }

    // se chegar aqui, então o loop não foi quebrado hora nenhuma, obviamente! portanto, apenas 
    // printamos a mensagem de 'tente novamente' e lemos os números mais uma vez, para que o loop recomece
    printf("Tente novamente!\n");
    scanf("%d %d %d", &num1, &num2, &num3);
  }

  return 0;
}