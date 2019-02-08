#include <stdio.h>

int main(){
  int n, numerosNaLinha = 1;
  int i;
  int numASerPrintado = 1;
  scanf("%d",&n);

  // a condição do while garante que ele será executado 'n' vezes (rever aulas)
  while(n--) {
    // esse for, dentro do while, garante que printaremos o número certo de números, ele
    // acontece 'numerosNaLinha' vezes
    for(i=0;i<numerosNaLinha;i++){
      // a variavel numASerPrintado é sempre incrementada em uma unidade após o print,
      // garantindo assim que o próximo número será um sucessor
      printf("%d ", numASerPrintado);
      numASerPrintado++;
    }
    printf("\n");
    numerosNaLinha++;
  }
  return 0;
}