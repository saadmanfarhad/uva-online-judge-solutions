#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n)==1){
        if(n==0){
            return 0;
        }
        else{
            if(n>=101){
                printf("f91(%d) = %d\n",n,n-10);
            }
            else if(n<=100){
                printf("f91(%d) = %d\n",n,91);
            }
        }
    }
}
