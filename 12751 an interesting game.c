#include <stdio.h>

int main()
{
    int t,n,k,x,sum,j,l,i;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            sum=0;
            scanf("%d%d%d",&n,&k,&x);
            for(j=1;j<=n;j++){
                sum+=j;
            }
            for(j=1,l=x;j<=k;l++,j++){
                sum-=l;
            }
            printf("Case %d: %d\n",i,sum);
        }
        return 0;
    }
}
