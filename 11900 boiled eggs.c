#include <stdio.h>

int main()
{
    int t,i,j,n,p,q;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d%d%d",&n,&p,&q);
            int ar[n],sum=0,lim=0,count=0;
            for(j=0;j<n;j++){
                scanf("%d",&ar[j]);
            }
            for(j=0;j<n;j++){
                sum=sum+ar[j];
                lim++;
                if(lim<=p && sum<=q){
                    count++;
                }
            }
            printf("Case %d: %d\n",i,count);

        }
    }
    return 0;
}
