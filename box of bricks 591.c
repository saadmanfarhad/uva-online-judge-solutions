#include <stdio.h>

int main()
{
    int n,i=0,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        else
        {
            i++;
            int ar[n],sum=0,bricks,count=0;
            for(j=0; j<n; j++)
            {
                scanf("%d",&ar[j]);
                sum=sum+ar[j];
            }
            bricks=sum/n;
            for(j=0; j<n; j++)
            {
                if(ar[j]>bricks)
                {
                    count=count+(ar[j]-bricks);
                }
            }
            printf("Set #%d\n",i);
            printf("The minimum number of moves is %d.\n\n",count);
        }
    }
}
