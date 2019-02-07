## Estrutura básica de um programa em C
```c
#include <stdio.h>

int main () {
    printf("olá, mundo!\n");

    return 0;
}
```

## Exibindo texto na tela

```c
#include <stdio.h>

int main () {
    printf("Um texto qualquer\n");
}
```
### Observações
* O `printf` é a *função* que imprime o texto na tela
* O `\n` (`barra invertida` e letra `n`) significa *[quebra de linha](https://pt.wikipedia.org/wiki/Nova_linha)*

## Lendo do teclado

```c
#include <stdio.h>

int main () {
    int variavelA;

    scanf("%d", &variavelA);
    printf("Você digitou o número %d\n", variavelA);
}
```

### Observações
* O `scanf` é a *função* que lê o texto digitado e guarda o valor em uma *variável*
* Na linguagem C é necessário colocar o símbolo `&` antes do nome da *variável* para armazenar o valor digitado nela
* O símbolo `%` seguido da letra `d` (`%d`) faz com que o *input* (texto digitado pelo usuário) seja lido como um número inteiro.


## Links Úteis
* [Operadores em C | Wikipédia](https://pt.wikipedia.org/wiki/Operadores_em_C_e_C%2B%2B)
* [Programar em C - Entrada e saída simples | Wikibooks](https://pt.wikipedia.org/wiki/Operadores_em_C_e_C%2B%2B)
