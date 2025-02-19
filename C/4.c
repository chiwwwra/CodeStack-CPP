#include <stdio.h>
#include <math.h>
int main() {
    int num,k,i=2,count=0;
    scanf("%d", &num);
    k=sqrt(num);
    // Complete the code
    while(i<=k)
    {
        if(num%i==0)
        {
            count ++;
        }
        i++;
    }
    if(count>=1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
