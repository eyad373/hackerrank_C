#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int a,b,Mand=0,Mor=0,Mxor=0;
  for(a=1;a<=n;a++){
      for(b=a+1;b<=n;b++){
          int AND=a&b;
          int OR=a|b;
          int XOR=a^b;
          if(AND<k && AND>Mand) Mand=AND;
          if(OR<k && OR>Mor) Mor=OR;
          if(XOR<k && XOR>Mxor) Mxor=XOR;
      }
  }
      printf("%d\n", Mand);
      printf("%d\n", Mor);
      printf("%d\n", Mxor);
  }


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
