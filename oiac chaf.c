/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{char str[] = "ciao";
int i=0;
    printf("%s",str);
while(str[i]!=0)
{
    i=i+1;
    
}
printf ("stampare la i %d\n",i);
while(i>0)
{
    i=i-1;
    printf("%c",str[i]);
}



    return 0;
}
