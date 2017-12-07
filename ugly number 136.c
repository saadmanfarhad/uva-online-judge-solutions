#include <stdio.h>

int check(long long int n){
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;
    while(n%5==0)n/=5;
    if(n==1){
        return 1;
    }
    return 0;
}

int main()
{
    int count=3,f;
    long long int x=4;

    while(count!=1500){
        f=check(x);
        printf("%d\n",count);
        if(f==1){
            count++;
        }
        x++;
    }
    printf("The 1500'th ugly number is %lld",x-1);
}
