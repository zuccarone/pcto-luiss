/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void
fattoriale (int N)
{ int tot= 1;
while(N>0)
{tot=tot*N;
    N=N-1;
}
printf("finale%d",tot);
}
int main()
{
int N;
printf("valore iniziale",N);
scanf("%d",&N);
fattoriale(N);

    

    return 0;
}
