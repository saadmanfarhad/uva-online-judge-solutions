#include <stdio.h>

int main()
{
    long long int x,y,t;
    while(scanf("%llu %llu",&x,&y)==2){
        if(x>y){
            t=x;
            x=y;
            y=t;
        }
        printf("%llu\n",y-x);
    }
    return 0;
}
