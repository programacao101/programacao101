#include <stdio.h>

int main(){
  int num1, num2;
  int resposta;
  int seguraNum1;
  scanf("%d %d", &num1, &num2);
 
  /* EXPLICAÇÃO DO ALGORITMO DE EUCLIDES
  * Por prova matemática (que não vou mostrar aqui porque é longa), é possível concluir que
  * mdc(a,b) = mdc(b,a%b). Ou seja, o mdc de a e b é a mesma coisa que o mdc de b e o resto da
  * divisão de a por b. O algoritmo, portanto, faz a seguinte coisa:
  * mdc(a,b) = mdc(b, a%b) = mdc(a%b, b%(a%b)) ..... até que esse mdc seja calculável. Esse momento
  * é justamente quando o resto da divisão é 0, afinal o mdc de qualquer número e 0 é o próprio
  * número! Assim obtemos a resposta!  
  */

  // fazemos um check antes para ver se num2 já começa sendo 0, então printamos num1 (para evitar problemas
  // de tentar tirar o módulo de algum número com 0). Se não, fazemos o algoritmo
  if(num2 == 0)
    printf("%d\n", num1);
  else {
    while(num1 % num2 != 0) {
      // 'seguraNum1' serve para não perdemos o valor de num1 ao atribuirmos num2 a ele, afinal precisaremos
      // disso para calcular o resto.
      seguraNum1 = num1;
      num1 = num2;
      num2 = seguraNum1 % num2;
    }

    printf("%d\n", num2);
  }
  return 0;
}