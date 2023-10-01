#include <stdio.h>

int main(void){
   int d,m,a,d2,m2,a2, x,y,z;

  printf("Insira sua data de nascimento no formato dd/mm/ano:\n");
  scanf("%d/%d/%d", &d,&m,&a);

  printf("Insira a data atual no formato dd/mm/ano:\n");
  scanf("%d/%d/%d", &d2,&m2,&a2);

  x = a2 - a; 
  if(m2 > m){
    printf("idade: %d anos", x);
  }
  if(m2 < m){
    x-=1;
    printf("idade: %d", x);
  }
  if(m2 == m){
    if(d2 >= d){
    printf("idade: %d anos", x);
    }else{ 
    x-=1;
    printf("idade: %d anos", x-1);
    }
  }

    if(x>=16)
      printf("\nPode votar");
    else{
      printf("\nNão pode votar");
    }

    if(x>=18)
      printf("\nPode dirigir");
    else{
      printf("\nNão pode dirigir");
    }

  
  

  


  
  return 0;
  }
