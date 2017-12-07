#include <stdio.h>

int main()
{
    int t,i,j,k,n,te;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d", &n);
            int ar[n];
            for(j=0; j<n; j++)
            {
                scanf("%d", &ar[j]);
            }
            for(j=0; j<n-1; j++)
            {
                for(k=j+1; k<n; k++)
                {
                    if(ar[j]>=ar[k])
                    {
                        te=ar[j];
                        ar[j]=ar[k];
                        ar[k]=te;
                    }
                }
            }
            printf("Case %d: %d\n", i,ar[n-1]);
        }
        return 0;
    }
}
