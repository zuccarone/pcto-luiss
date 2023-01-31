/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{int luna=1969;
int nascita;
printf("anno di nascita");
scanf("%d",&nascita);
if(luna==nascita)   
printf("stesso anno in cui l'uomo è andato sulla luna");
else if(luna<nascita)
printf("nato dopo %d il primo atteraggio sulla luna",nascita-luna );
else
printf("nato prima %d il primo atteraggio sulla luna",luna- nascita);
    return 0;
}
