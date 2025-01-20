#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int,int,int,int);
int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("Maximum= %d", ans);
    return 0;
}
int max_of_four(int x,int y,int z,int r)
{   
   int max=x;
   if(y>max)
    {
        max=y;
    }
    if(z>max)
    {
        max=z;
    }
    if(r>max)
    {
        max=r;
    }
    return max;
}
