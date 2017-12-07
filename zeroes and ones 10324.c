#include <stdio.h>
#include <stdlib.h>

#define size 1000000000
char ar[size];
int main()
{
    int i=0,turn,j,a,b,temp,k,l;
    while(scanf("%s",&ar)==1){
        i++;
        scanf("%d",&turn);
        printf("Case %d:\n",i);
        for(j=0;j<turn;j++){
            int flag=1;
            scanf("%d%d",&a,&b);
            if(a>b){
                temp=a;
                a=b;
                b=temp;
            }
            for(k=a;k<b-1;k++){
                for(l=a+1;l<=b;l++){
                    if(ar[k]!=ar[l]){
                        flag=0;
                        break;
                    }
                }
                break;
            }
            if(flag==0){
                printf("No\n");
            }
            else{
                printf("Yes\n");
            }
        }
    }
    return 0;
}
