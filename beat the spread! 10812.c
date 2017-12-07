#include <stdio.h>

int main()
{
    int t,s,d,i,a,b;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d%d",&s,&d);
            if(d>s){
                printf("impossible\n");
            }
            else{
                if((s+d)%2==0){
                    a=(s+d)/2;
                    b=s-a;
                    printf("%d %d\n",a,b);
                }
                else{
                    printf("impossible\n");
                }

            }
        }
        return 0;
    }
}
