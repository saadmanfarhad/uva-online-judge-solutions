#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){
        if(a==0 && b==0 && c==0){
            return 0;
        }
        else{
            if(a*a+b*b==c*c || b*b+c*c==a*a|| c*c+a*a==b*b){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
    }
}
