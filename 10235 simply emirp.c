#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int rev(int n){
    int i=1,c=n,m=1,newnum=0,r;
    while(n){
        m*=10;
        i++;
        n=n/10;
    }
    m=m/10;
    while(c){
        r=c%10;
        newnum+=(m*r);
        c=c/10;
        m=m/10;
    }
    return newnum;
}

int main()
{
    int n,prime,rnum,rprime;
    while(scanf("%d",&n)==1){
        prime=isPrime(n);
        if(prime==0){
            printf("%d is not prime.\n",n);
        }
        else{
            rnum=rev(n);
            rprime=isPrime(rnum);
            if(rprime==1 && rnum!=n){
                printf("%d is emirp.\n",n);
            }
            else{
                printf("%d is prime.\n",n);
            }
        }
    }
    return 0;
}
