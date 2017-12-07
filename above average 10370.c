#include <stdio.h>

int main()
{
    int t,i,n,j;
    while(scanf("%d", &t)==1){
        for(i=1;i<=t;i++){
            scanf("%d", &n);
            int ar[n],sum=0,c=0;
            double avg,per;
            char ch='%';
            for(j=0;j<n;j++){
                scanf("%d", &ar[j]);
                sum=sum+ar[j];
            }
            avg=sum/n;
            for(j=0;j<n;j++){
                if(ar[j]>avg){
                    c++;
                }
            }
            per=((double)c*100)/(double)n;
            printf("%.3lf%c\n",per,ch);
        }
        return 0;
    }
}
