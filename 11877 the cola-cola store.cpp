#include <cstdio>

int main()
{
    int t,n,sum;
    while(scanf("%d",&n)==1)
    {
        if(n!=0)
        {
            sum=0;
            while(n>0)
            {
                if(n==2){
                    n=n+1;
                }
                n=n-3;
                n=n+1;
                sum+=1;
            }
            printf("%d\n",sum-1);
        }
        else
        {
            return 0;
        }
    }
}

