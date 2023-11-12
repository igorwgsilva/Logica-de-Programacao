#include <stdio.h>

int main(void){
  int a=0, b=0, c=0, d=0, x, soma, br=0, n=0;

  while(x != 7){
    printf("Insira seu voto (1 a 4) 5 = nulo, 6 = branco, 7 para sair.:");
    scanf("%d", &x);

    switch (x){
      case 1:
      ++a;
      break;
      
      case 2:
      ++b;
      break;

      case 3:
      ++c;
      break;

      case 4:
      ++d;
      break;

      case 5:
      ++br;
      break;

      case 6:
      ++n;
      break;
    }
  }

  soma = a+b+c+d;
  printf("\n\tTotal de votos: %d\n\tCandidato 1: %d = %d %%\n\tCandidato 2: %d = %d %% \n\tCandidato 3: %d = %d %%\n\tCandidato 4: %d = %d %%\n\tVotos em branco: %d = %d %%\n\tVotos nulos: %d = %d %%", soma, a, (100*a)/soma, b, (100*b)/soma, c, (100*c)/soma, d, (100*d)/soma, br, (100*br)/soma, n, (100*n)/soma);

  
  return 0;
}
