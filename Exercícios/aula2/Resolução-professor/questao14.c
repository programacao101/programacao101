#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  double a, b, c;
  
  scanf("%lf %lf %lf", &a, &b, &c);
  double delta = (b*b) -4*a*c;
  double raizQuadrada = sqrt(delta);
  double raiz1 = (-b + raizQuadrada)/(2*a);
  double raiz2 = (-b - raizQuadrada)/(2*a);

  if(delta == 0)
    printf("1 raiz real: %.3lf\n", raiz1);
  else if(delta < 0)
    printf("Nao existem raizes reais!\n");
  else
    printf("2 raizes reais: %.3lf e %.3lf\n", raiz1, raiz2);
  
  return 0;
}