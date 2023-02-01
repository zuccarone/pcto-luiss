/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int prezzo;
  int quantit;
  int sconto;
  int prezzotot;
  prezzo = 5;
    printf ("inserire quantit");
       while (quantit>0)
  scanf ("%d",&quantit);
  prezzotot = prezzo * quantit;
  if (prezzotot >= 150)
    {
    sconto = prezzotot * (1 - 0.10);
        printf("prezzo con sconto %d\n",sconto);
    }
    else if (prezzotot>=250)
    {
        sconto = prezzotot*(1-0.15);
        printf("prezzo sconto %d\n",sconto);
    }




  return 0;
}
