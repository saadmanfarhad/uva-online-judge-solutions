#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,n,d;
    char hw[21];
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            char sub[n][21];
            int days[n],flag=0;
            for(j=0;j<n;j++){
                scanf("%s %d",sub[j],&days[j]);
            }
            scanf("%d",&d);
            scanf("%s",hw);
            for(j=0;j<n;j++){
                if(strcmp(sub[j],hw)==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                if(days[j]<=d){
                    printf("Case %d: Yesss\n",i);
                }
                else if(days[j]>d && days[j]<=d+5){
                    printf("Case %d: Late\n",i);
                }
                else{
                    printf("Case %d: Do your own homework!\n",i);
                }
            }
            else{
                printf("Case %d: Do your own homework!\n",i);
            }
        }
        return 0;
    }
}
