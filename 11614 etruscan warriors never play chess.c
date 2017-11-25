#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int t,i,n,j,count;
    long long int mul;
    while(scanf("%llu",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%llu",&n);
            count=(-1+sqrt(1+(8*n)))/2;
            printf("%llu\n",count);
        }
        return 0;
    }
}
