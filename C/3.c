#include <stdio.h>

int main(void) {
	// your code goes here
    int n1,n2,n3,max;
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if(max < n2)
    {
        max=n2;
    }
    if(max < n3)
    {
        max=n3;
    }
    printf("Largest: %d",max);
    return 0;  
}

