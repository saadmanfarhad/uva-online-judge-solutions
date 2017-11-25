#include <stdio.h>

int sumOfDigits(unsigned long long n){
    unsigned long long int rem;
    int sum=0;
    while(n){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    if(sum%10==sum){
        return sum;
    }
    else{
        sumOfDigits(sum);
    }
}

int main()
{
    unsigned long long int n;
    while(scanf("%llu",&n)==1){
        if(n!=0){
            int s;
            s=sumOfDigits(n);
            printf("%d\n",s);
        }
        else{
            return 0;
        }
    }
}
