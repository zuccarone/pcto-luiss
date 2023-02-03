/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void
av_av (int *array, int dimensione)
{
  int temp;
  int t;
  int z;
  temp = 0;
  t = 0;
  while (t < dimensione - 1)
    {
      z=t+1;
      while (z < dimensione)
	{
	  if (array[t] > array[z])	// secondo while 
	    {
	      temp = array[t];	// variabile temporanea
	      array[t] = array[z];	//scambia valore
	      array[z] = temp;	//posiziona il valore
	    }
	  z = z + 1;
	}
      t = t + 1;
    }
}
  int main ()
  {
    int array[] = { 1, 3, 6, 5, 7,10, 4, 8, 2, 9, 11 };
    int dimensione = 11;
    int t=0;
    av_av(array, dimensione);
    while(t<dimensione){
    printf ("%d\n",array[t]);
    t=t+1;
        
    }
    return 0;
  }
