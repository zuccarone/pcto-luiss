/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N1;
    int N2;
    int N3;
    
    printf ("inserisci N1");
    scanf("%d",&N1);
    printf("inserisci N2");
    scanf("%d",&N2);
    printf("inserisci N3");
    scanf("%d",&N3);
    
    if(N1==N2==N3)
        printf("il triangolo è equilatero");
    else if (N1==N2 || N1==N3 || N2==N3)
        printf("il triangolo è isoscele");
    else 
        printf ("il triangolo è scaleno");
       
    
    return 0;
}
