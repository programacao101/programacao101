#include <stdio.h>

int main(){
  double altura;
  char sexo;
  scanf("%c %lf", &sexo, &altura);

  if(sexo == 'h')
    // .2 printa com duas casas decimais! é preciso por esse número depois do ponto, que vem depois do '%'
    printf("%.2lf", (72.7*altura) - 58);
  else 
    printf("%.2lf", (62.1*altura) - 44.7);

  return 0;
}