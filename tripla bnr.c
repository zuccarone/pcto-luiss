/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void
ft_ft (int *nbr,int *x,int y)
{
  *nbr = 42;
  *x=6;
  y=3;

  
}

int
main ()
{ int y =8;
  int nbr = 1;
  int x = 2;
  printf ("il valore iniziale:%d %d %d\n", nbr,x,y);
  ft_ft (&nbr, &x, y);
  printf ("il valore richiamato ft_ft:%d %d %d\n", nbr,x,y);

  
  

  return 0;
}
