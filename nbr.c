/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void
ft_ft (int *nbr)
{
  *nbr = 42;
}

int
main ()
{
  int nbr = 1;
  int x = 2;
  printf ("il valore iniziale:%d\n", nbr);
  ft_ft (&nbr);
  printf ("il valore richiamato ft_ft:%d\n", nbr);
  printf ("valore iniziale:%d\n", x);
  ft_ft (&x);
  printf ("il valore richiamato ft_ft:%d\n", x);

  return 0;
}
