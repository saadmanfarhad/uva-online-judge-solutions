#include <stdio.h>

int main()
{
    int t,i,n,p,counter,j,k,fr,sa,count,flag;
    while(scanf("%d", &t)==1)
    {
        for(i=0;i<t;i++){
            count=0;
            scanf("%d",&n);
            int days[n+1];
            for(j=1;j<=n;j++){
                days[j]=0;
            }
            scanf("%d",&p);
            int har[p];
            for(j=0;j<p;j++){
                scanf("%d",&har[j]);
            }
            for(j=0;j<p;j++){
                counter=har[j];
                for(k=1;k<=n;k++){
                    if(k==counter){
                        days[k]+=1;
                        counter+=har[j];
                    }
                }
            }
            for(j=1;j<=n;j++){
                if(days[j]>0){
                    flag=1;
                    fr=6,sa=7;
                    while(fr<=n || sa<=n){
                        if(j==fr){
                            flag=0;
                        }
                        if(j==sa){
                            flag=0;
                        }
                        fr+=7;
                        sa+=7;
                    }
                    if(flag==1){
                        count++;
                    }
                }
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
