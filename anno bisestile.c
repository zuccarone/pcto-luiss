/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int norm;
printf("inserisci nor\n");
scanf("%d",&norm);
if((norm%4==0 && norm%100!=0) || norm%400==0);
printf("anno è bisestile\n");
else((norm%4!=0 && norm%100==0) || norm%400!=0);
printf("anno non è bisestile\n");

return 0;
}
