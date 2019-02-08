#include <stdio.h>

int main(){
  int prestacao, salario;
  scanf("%d %d",&salario, &prestacao);

  if(prestacao < 0 || salario < 0) {
    printf("Valores invalidos!\n");
  }
  else {
    if(prestacao > (0.2*salario))
      printf("Emprestimo nao concedido!\n");
    else
      printf("Emprestimo concedido!\n");
  }
  return 0;
}