/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void
ft_ft (int *nbr,int *x)
{
  *nbr = 42;
  *x=6;
  
}

int
main ()
{
  int nbr = 1;
  int x = 2;
  printf ("il valore iniziale:%d %d\n", nbr,x);
  ft_ft (&nbr, &x);
  printf ("il valore richiamato ft_ft:%d %d\n", nbr,x);
  
  

  return 0;
}
