#include <stdio.h>
#include <math.h>

int main()
{
    int t,i,j,n;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            int ar[n],msum=0,jsum=0;
            double d;
            for(j=0;j<n;j++){
                scanf("%d",&ar[j]);
            }
            for(j=0;j<n;j++){
                if(ar[j]<30){
                    msum+=10;
                }
                else{
                    d=(double)ar[j]/(double)30;
                    if(ceil(d)==d){
                        msum+=(10*(ceil(d)+1));
                    }
                    else{
                        msum+=(10*ceil(d));
                    }
                }
            }

            for(j=0;j<n;j++){
                if(ar[j]<60){
                    jsum+=15;
                }
                else{
                    d=(double)ar[j]/(double)60;
                    if(ceil(d)==d){
                        jsum+=(15*(ceil(d)+1));
                    }
                    else{
                        jsum+=(15*ceil(d));
                    }
                }
            }
            if(msum==jsum){
                printf("Case %d: Mile Juice %d\n",i,msum);
            }
            else if(msum<jsum){
                printf("Case %d: Mile %d\n",i,msum);
            }
            else{
                printf("Case %d: Juice %d\n",i,jsum);
            }
        }
        return 0;
    }
}
