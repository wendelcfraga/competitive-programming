#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxA=0;
  int maxB=0;
  int maxC=0;
  int maior1=0;
  int maior2=0;
  int maior3=0;
  for (int i = 1; i<n; i++)
  {
    for (int j = i + 1; j<=n; j++)
    {
        maxA = i&j;
        if (maxA > maior1 && maxA < k)
        {
            maior1 = maxA;
        }
        
        maxB = i|j;
        if (maxB > maior2 && maxB < k)
        {
            maior2 = maxB;
        }
        
        maxC = i^j;
        if (maxC > maior3 && maxC < k)
        {
            maior3 = maxC;
        }
    }
  }
  printf("%d\n", maior1);
  printf("%d\n", maior2);
  printf("%d\n", maior3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
