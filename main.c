#include <stdio.h>

int fibonacci(int num) {
  int f[num+1];

  f[0]=0;
  f[1]=1;

  int i;  
  for(i=2; i<=num; i++){
    f[i] = f[i-1] + f[i-2];
  }
  
  return f[num];
}

int main(void) {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  // Para cada i (de 2 a n), calcula e imprime o
  // i-esimo termo da sequencia de Fibonacci.
  for (i = 1; i <= n; i++) {
    printf("Fib(%d) = %d\n",i,fibonacci(i));
  }
  
  fibonacci(n);
  printf("\n");
  return 0;
}