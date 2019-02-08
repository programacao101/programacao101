#include <stdio.h>
int main(){
  int n, i=1;
  scanf("%d",&n);
  
  for(i=1; i<=20; i++){
    printf("%d X %d = %d\n", n, i, n*i);
  }

  return 0;
}