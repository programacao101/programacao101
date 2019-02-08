#include <stdio.h>
#include <math.h>

int main(){
  int n, i;
  scanf("%d",&n);
 
  // loopamos de 1 ate N vendo se um numero nesse intervalo, quando elevado ao quadrado, ainda é
  // menor do que N. Se sim, esse resultado é um número que deve aparecer na resposta (é quadrado perfeito).
  // Se não, podemos quebrar o loop, afinal nenhum número maior que esse, se elevado ao quadrado, resultará
  // em um inteiro menor do que N.
  for(i=1;i<=n;i++){
    if(i*i <= n)
      printf("%d ", i*i);
    else
      break;
  }

  printf("\n");
  return 0;
}