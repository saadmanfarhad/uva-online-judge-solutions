#include <stdio.h>

int main()
{
    unsigned long long int n,i,j;
    while(scanf("%llu", &n)==1){
        if(n==1){
            printf("The Fibonacci number for %llu is %llu\n",1,1);
        }
        else{
            unsigned long long int ar[10000];
            ar[0]=0;
            ar[1]=1;
            for(i=2;i<n+1;i++){
                ar[i]=ar[i-1]+ar[i-2];
            }
            printf("The Fibonacci number for %llu is %llu\n",n,ar[n]);
        }
    }
    return 0;
}
