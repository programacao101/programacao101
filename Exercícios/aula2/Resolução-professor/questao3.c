#include <stdio.h>

int main(){
  int var1, var2, var3, var4, var5;
  int contador = 0;
  scanf("%d %d %d %d %d",&var1, &var2, &var3, &var4, &var5);

  // a variável contador começa com 0 e, a cada ímpar, aumenta uma unidade!
  if(var1 % 2 != 0)
    contador++;
  if(var2 % 2 != 0)
    contador++;
  if(var3 % 2 != 0)
    contador++;
  if(var4 % 2 != 0)
    contador++;
  if(var5 % 2 != 0)
    contador++;
  
  printf("%d são ímpares!\n", contador);

  return 0;
}