#include <stdio.h>

int main()
{
    int n,b,h,w,i,j;
    while(scanf("%d%d%d%d",&n,&b,&h,&w)==4){
        int hrent,beds[w],min=6000000,sum;
        for(i=0;i<h;i++){
            scanf("%d",&hrent);
            for(j=0;j<w;j++){
                scanf("%d",&beds[j]);
                if(beds[j]>=n){
                    sum=n*hrent;
                    if(sum<=b && sum < min){
                        min=sum;
                    }
                }
            }
        }
        if(min==6000000){
            printf("stay home\n");
        }
        else{
            printf("%d\n",min);
        }
    }
    return 0;
}
