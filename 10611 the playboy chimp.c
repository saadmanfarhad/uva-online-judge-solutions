#include <stdio.h>


int main()
{
    int n,i,q,j,k,lmax;
    long long int gmin;
    scanf("%d",&n);
    long long int ar[n];
    for(j=0; j<n; j++)
    {
        scanf("%lld",&ar[j]);
    }
    scanf("%d",&q);
    long long int arq[q];
    for(j=0; j<q; j++)
    {
        scanf("%lld",&arq[j]);
    }
    for(j=0; j<q; j++)
    {
        lmax=0;
        gmin=2147483647;
        for(k=0; k<n; k++)
        {
            if(ar[k]<arq[j] && lmax<ar[k])
            {
                lmax= ar[k];
            }
            if(ar[k]>arq[j] && gmin>ar[k])
            {
                gmin= ar[k];
            }
        }
        if(lmax==0 && gmin==2147483647)
        {
            printf("X X\n");
        }
        else if(lmax==0 && gmin!=2147483647)
        {
            printf("X %lld\n",gmin);
        }
        else if(gmin==2147483647 && lmax!=0)
        {
            printf("%d X\n",lmax);
        }
        else
        {
            printf("%d %lld\n",lmax,gmin);
        }
    }
    return 0;
}
