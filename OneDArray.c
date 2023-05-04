#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, sum=0;
    
    scanf("%d", &N);
    int i, arr[N];
    for(i=0;i<N;i++){
        
        scanf("%d", &arr[i]);
    }
    for(i=0;i<N;i++){
        sum+=arr[i];
    }  
    printf("%d", sum);
    return 0;
}
