#include <stdio.h>

int main(){
  int var1, var2;
  scanf("%d %d",&var1, &var2);
  // lembrando que, quando nosso if ou else tem apenas uma instrução, podemos omitir as chaves!
  /* nao afeta a organização do nosso código e o deixa mais limpo! */

  // a é igual a b?
  if (var1 == var2)
    printf("Sim\n");
  else 
    printf("Nao\n");

  // a vezes b é menor que 100?
  if (var1*var2 < 100) 
    printf("Sim\n");
  else 
    printf("Nao\n");

  // 3 vezes a é maior que b?
  if (3*var1 > var2) 
    printf("Sim\n");
  else 
    printf("Nao\n");
  
  // a ou b são maiores que 0?
  if (var1 > 0 || var2 > 0)
    printf("Sim\n");
  else 
    printf("Nao\n");

  // simultaneamente negativos?
  if (var1 < 0 && var2 < 0)
    printf("Sim\n");
  else 
    printf("Nao\n");

  // algum deles é impar?
  if (var1 % 2 != 0 || var2 % 2 != 0)
    printf("Sim\n");
  else 
    printf("Nao\n");

  // printe o menor deles
  if (var1 < var2)
    printf("%d\n",var1);
  else 
    printf("%d\n",var2);

  return 0;
}