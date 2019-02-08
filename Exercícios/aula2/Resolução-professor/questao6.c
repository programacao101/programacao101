#include <stdio.h>

int main(){
  int diainit,mesinit,diafinal,mesfinal;
  int resposta;
  scanf("%d %d %d %d", &diainit, &mesinit, &diafinal, &mesfinal);

  // se a data final estiver no passado
  if((mesfinal < mesinit) || (mesfinal == mesinit && diafinal < diainit)) {
    // um ano menos a diferenca entre o mes inicial (maior) e o final(menor) somada com os dias.
    // Os meses são convertidos pra dia multiplicando-os por 30.
    resposta = 360 - ((mesinit*30 + diainit) - (mesfinal*30 + diafinal));
  }
  else 
    resposta = ((mesfinal*30 + diafinal) - (mesinit*30 + diainit));

  printf("%d\n",resposta);

  return 0;
}