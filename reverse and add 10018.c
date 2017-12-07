#include <stdio.h>

int palindrome(long long int n)
{
    long long int rem=0,r=0,k=1,i,c;
    i=n;
    c=n;
    while(i)
    {
        k=k*10;
        i=i/10;
    }
    k=k/10;
    while(n)
    {
        rem=n%10;
        n=n/10;
        r=r+(rem*k);
        k=k/10;
    }
    if(r==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long long int rev_num(long long int n){
    long long int rem=0,r=0,k=1,i,c;
    i=n;
    c=n;
    while(i)
    {
        k=k*10;
        i=i/10;
    }
    k=k/10;
    while(n)
    {
        rem=n%10;
        n=n/10;
        r=r+(rem*k);
        k=k/10;
    }
    return r;
}

int main()
{
    int t,i;
    long long int num;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%lld",&num);
            int count=0;
            long long int rev;
            if(palindrome(num)==1){
                rev= rev_num(num);
                num=num+rev;
                count++;
            }
            while(palindrome(num)!=1)
            {
                rev= rev_num(num);
                num=num+rev;
                count++;
            }
            printf("%d %lld\n",count,num);
        }
        return 0;
    }
}
