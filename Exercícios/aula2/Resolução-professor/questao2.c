#include <stdio.h>

int main(){
  int var1, var2, var3;
  scanf("%d %d %d",&var1, &var2, &var3);

  // se há números repetidos
  if(var1 == var2 || var1 == var3 || var2 == var3) 
    printf("Sim\n");
  else {
    printf("Nao\n");
    //maior deles
    if(var1 > var2 && var1 > var3){
      printf("Maior: %d\n", var1);

      //menor deles
      printf("Menor: ");
      if(var2 < var3)
        printf("%d\n", var2);
      else
        printf("%d\n", var3);
    }
    else if(var2 > var1 && var2 > var3){
      printf("Maior: %d\n", var2);

      //menor deles
      printf("Menor: ");
      if(var1 < var3)
        printf("%d\n", var1);
      else
        printf("%d\n", var3);
    } 
    else if(var3 > var1 && var3 > var2){
      printf("Maior: %d\n", var3);

      //menor deles
      printf("Menor: ");
      if(var1 < var2)
        printf("%d\n", var1);
      else
        printf("%d\n", var2);
    }
  }

  // printe os pares
  printf("Pares: ");
  if(var1 % 2 == 0)
    printf("%d ", var1);
  if(var2 % 2 == 0)
    printf("%d ", var2);
  if(var3 % 2 == 0)
    printf("%d\n", var3);

  // printe os impares
  printf("Impares: ");
  if(var1 % 2 != 0)
    printf("%d ", var1);
  if(var2 % 2 != 0)
    printf("%d ", var2);
  if(var3 % 2 != 0)
    printf("%d\n", var3);

  // printe os positivos
  printf("Positivos: ");
  if(var1 > 0)
    printf("%d ", var1);
  if(var2 > 0)
    printf("%d ", var2);
  if(var3 > 0)
    printf("%d\n", var3);

  // printe os negativos
  printf("Negativos: ");
  if(var1 < 0)
    printf("%d ", var1);
  if(var2 < 0)
    printf("%d ", var2);
  if(var3 < 0)
    printf("%d\n", var3);

  return 0;
}