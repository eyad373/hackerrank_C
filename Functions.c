#include <stdio.h>
int max1(int a, int b){
        if (a>b)
        return a;
        else
        return b;
    }
int max2(int c, int d){
    if (c>d)
    return c;
    else {
    return d;
    }
}    
int max_of_four(int a, int b, int c, int d){
    int x,y;
    x = max1(a,b);
    y = max2(c,d);
    if (x>y)
    return x;
    else
    return y;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
