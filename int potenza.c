/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int potenza (int N, int E)
{
  int tot = 1 ;
  while (E > 0)
    {
      tot = tot * N;
    E = E - 1;}
return(tot);
}

int
main ()
{int N;
int E;
  printf ("valore iniziale");
   scanf ("%d", &N);
printf("valore esponente");
scanf("%d", &E);
printf("tot%d",potenza(N,E));

  return 0;
}
