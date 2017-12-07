#include <stdio.h>

int main()
{
    int n,i=0,j;
    while(scanf("%d",&n)==1){
        if(n!=0){
            i++;
            int ar[n],f1=0,f2=0;
            for(j=0;j<n;j++){
                scanf("%d",&ar[j]);
                if(ar[j]>0){
                    f1++;
                }
                else if(ar[j]==0){
                    f2++;
                }
            }
            printf("Case %d: %d\n",i,f1-f2);
        }
        else{
            return 0;
        }
    }
}
