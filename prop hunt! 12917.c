#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if(c==a){
            printf("Hunters win!\n");
        }
        else{
            int flag=0;
            while(b>0){
                if(c==a){
                    printf("Hunters win!\n");
                    flag=1;
                    break;
                }
                b--;
                c--;
            }
            if(flag==0){
                printf("Props win!\n");
            }
        }
    }
}
