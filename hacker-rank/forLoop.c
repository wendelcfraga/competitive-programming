/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    int intervalo = b - a;
      for (int i = a; i <= a + intervalo; i++)
      if (i == 1)
      {
        printf("one\n");  
      }
      else if (i == 2)
      {
        printf("two\n");  
      }
      else if (i == 3)
      {
        printf("three\n");  
      }
      else if (i == 4)
      {
        printf("four\n");  
      }
      else if (i == 5)
      {
        printf("five\n");  
      }
      else if (i == 6)
      {
        printf("six\n");  
      }
      else if (i == 7)
      {
        printf("seven\n");  
      }
      else if (i == 8)
      {
        printf("eight\n");  
      }
      else if (i == 9)
      {
        printf("nine\n");  
      }
      else if (i > 9 && i%2 == 0)
      {
        printf("even\n");  
      }
      else if (i > 9 && i%2 != 0)
      {
        printf("odd\n");  
      }
      else
      {
        ;
      }

    return 0;
}
