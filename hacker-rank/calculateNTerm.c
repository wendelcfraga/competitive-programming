/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int soma = a + b + c;
  int flag = n;
  int resultado=0;
  if (n == 1)
  {
    resultado = a;  
  }
  else if (n == 2)
  {
      resultado = b;
  }
  else if (n == 3)
  {
      resultado = c;
  }
  else 
  {
      resultado = find_nth_term(flag - 1, a, b, c) + find_nth_term(flag - 2, a, b, c) + find_nth_term(flag - 3, a, b,c);
  }
  return resultado;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}
