#include <stdio.h>
int main(){
  int N, numAna, numBeatriz;
  int pontosAna = 0, pontosBeatriz = 0;

  scanf("%d", &N);
  
  // loop que irá ocorrer N vezes, exatamente o que queremos!
  while(N--) {
    // a cada iteração do loop, lemos os dois número e vemos o maior!
    scanf("%d %d", &numAna, &numBeatriz);

    if(numAna > numBeatriz)
      pontosAna++;
    else if (numBeatriz > numAna)
      pontosBeatriz++;
  }

  printf("Ana: %d\nBeatriz: %d\n", pontosAna, pontosBeatriz);

  return 0;
}