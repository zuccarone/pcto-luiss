/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void divisione(int N1,int N2,int*Q,int*R){
*Q=N1/N2;
*R=N1%N2;
}
int main()
{int N1;
int N2;
int Q;
int R;
printf("scegli N1\n");
scanf("%d",&N1);
printf("scegli N2\n");
scanf("%d",&N2);
divisione (N1,N2,&Q,&R);
printf("risultato finale%d\n",Q);
printf("risultato finale resto %d\n",R);


    return 0;
}
