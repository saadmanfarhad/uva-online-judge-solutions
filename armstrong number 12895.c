#include <stdio.h>

int armstrong(unsigned long long int n){
    unsigned long long ncpy=n,ncpy2=n,sum=0,rem,digits=0,mul,i;
    while(n){
        n=n/10;
        digits++;
    }
    while(ncpy!=0){
        mul=1;
        rem=ncpy%10;
        ncpy=ncpy/10;
        for(i=1;i<=digits;i++){
            mul*=rem;
        }
        sum=sum+mul;
    }
    if(sum==ncpy2){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int t,i,check;
    unsigned long long int n;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%llu",&n);
            check=armstrong(n);
            if(check ==1){
                printf("Armstrong\n");
            }
            else{
                printf("Not Armstrong\n");
            }
        }
        return 0;
    }
}
