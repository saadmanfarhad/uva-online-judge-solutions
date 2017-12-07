#include <stdio.h>

int main()
{
    int t,a[3],i,j,k,te;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d %d %d", &a[0],&a[1],&a[2]);
            for(j=0;j<2;j++){
                for(k=j+1;k<3;k++){
                    if(a[j]>=a[k]){
                       te=a[j];
                       a[j]=a[k];
                       a[k]=te;
                    }
                }
            }
            printf("Case %d: %d\n",i,a[1]);
        }
        return 0;
    }
}
