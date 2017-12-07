#include <stdio.h>

int main()
{
    int t,i,n,j;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            int ar[n],hjump=0,ljump=0;
            for(j=0;j<n;j++){
                scanf("%d", &ar[j]);
            }
            if(n==1){
                printf("Case %d: %d %d\n",i,0,0);
            }
            else{
                for(j=0;j<n-1;j++){
                    if(ar[j]>ar[j+1]){
                        ljump++;
                    }
                    else if(ar[j]<ar[j+1]){
                        hjump++;
                    }
                }
                printf("Case %d: %d %d\n",i,hjump,ljump);
            }
        }
        return 0;
    }
}
