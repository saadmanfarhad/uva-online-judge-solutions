#include <stdio.h>

int main()
{
    int t,i,j;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            int n,k,p,lp;
            scanf("%d%d%d",&n,&k,&p);
            lp=k;
            for(j=1;j<=p;j++){
                if(lp==n){
                    lp=1;
                }
                else{
                    lp++;
                }
            }
            printf("Case %d: %d\n",i,lp);

        }
        return 0;
    }
}
