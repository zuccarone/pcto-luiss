/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fattoriale (int N)
{
  int tot = 1;
  while (N > 0)
    {
      tot = tot * N;
      N = N - 1;
    }
return (tot);
}

int
main ()
{
  int N;
  printf ("valore iniziale");
  scanf ("%d", &N);
 

 printf ("finale %d",fattoriale(N));

  return 0;
}
