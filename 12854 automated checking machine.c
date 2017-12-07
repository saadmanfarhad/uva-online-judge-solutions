#include <stdio.h>

int main()
{
    int ar1[5],ar2[5],sum[5],i,flag;
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&ar1[0],&ar1[1],&ar1[2],&ar1[3],&ar1[4],&ar2[0],&ar2[1],&ar2[2],&ar2[3],&ar2[4])==10)
    {
        for(i=0;i<5;i++){
            sum[i]=ar1[i]+ar2[i];
        }
        for(i=0;i<5;i++){
            if(sum[i]!=1){
                flag=0;
                break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}
