#include <stdio.h>
int main(){
  // modificador para aumentar o intervalo de valores que nosso numero pode armazenar,
  // afinal o fatorial pode ser muito grande e sera guardado nessa variavel
  unsigned long long int numero;
  int i;

  // placeholder de um unsigned long long int
  scanf("%llu", &numero);
  
  // loop que vai de 'numero-1' até 1, substituindo seu valor.
  for(i=numero-1;i >= 1; i--) {
    numero = numero * i;
  }

  // caso em que o querem saber o fatorial de 0, que é 1
  if(numero == 0)
    numero = 1;

  printf("%llu\n",numero);

  return 0;
}