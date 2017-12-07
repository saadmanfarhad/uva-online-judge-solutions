#include <stdio.h>

int main()
{
    int x,l,b,h,i;
    while(scanf("%d", &x)==1)
    {
        for(i=1;i<=x;i++){
            scanf("%d %d %d", &l,&b,&h);
            if(l<=20 && b<=20 && h<=20){
                printf("Case %d: good\n",i);
            }
            else printf("Case %d: bad\n",i);
        }
    }
    return 0;
}

