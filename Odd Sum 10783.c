#include <stdio.h>

int main()
{
    int x,a,b,c,sum,j,i;
    while(scanf("%d",&x)==1)
    {
        for(i=0; i<x; i++)
        {
            sum=0;
            scanf("%d\n",&a);
            scanf("%d",&b);
            for(j=a; j<=b; j++)
            {
                c=j;
                if(c%2==1)sum=sum+c;
            }
            printf("Case %d: %d\n",i+1,sum);
        }
    }
    return 0;
}
