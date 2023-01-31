/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int N1;
int N2;
printf("inserisci N1");
scanf("%d",&N1);
printf("inserisci N2");
scanf("%d",&N2);
if(N1%N2==0)
{printf("sono multipli");}
else 
{printf("non sono multipli");}
    return 0;
}
