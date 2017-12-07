#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            int inc,diff;
            double tax;
            scanf("%d",&inc);
            if(inc>180000){
                if(inc <480001){
                    diff= inc - 180000;
                    tax = ceil(diff*.1);
                    if(tax<2000){
                        tax=2000;
                    }
                }
                else if(inc < 880001){
                    diff= inc - 480000;
                    tax = ceil(diff*.15)+ceil(300000*.1);
                }
                else if(inc < 1180001){
                    diff = inc - 880000;
                    tax = ceil(diff*.2)+ceil(300000*.1)+ceil(400000*.15);
                }
                else{
                    diff= inc - 1180000;
                    tax =ceil(diff*.25)+ceil(300000*.2)+ceil(300000*.1)+ceil(400000*.15);
                }
            }
            else{
                tax= 0;
            }
            printf("Case %d: %d\n",i,(int)tax);
        }
        return 0;
    }
}
