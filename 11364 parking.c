#include <stdio.h>

int main()
{
    int t,i,j,k,l,n,temp;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            int ar[n],sum=0;
            for(j=0; j<n; j++)
            {
                scanf("%d",&ar[j]);
            }
            for(j=0; j<n-1; j++)
            {
                for(k=j; k<n; k++)
                {
                    if(ar[j]<ar[k])
                    {
                        temp=ar[j];
                        ar[j]=ar[k];
                        ar[k]=temp;
                    }
                }
            }

            for(j=0; j<=n-1;j++)
            {
                if(j==n-1)
                {
                    sum+=(ar[0]-ar[n-1]);
                }
                else
                {
                    sum=sum+(ar[j]-ar[j+1]);
                }
            }
            printf("%d\n",sum);
        }
        return 0;
    }
}
