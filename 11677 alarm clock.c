#include <stdio.h>

int main()
{
    int h1,h2,m1,m2,min1,min2;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            return 0;
        }
        else
        {
            min1=(h1*60)+m1;
            min2=(h2*60)+m2;
            if(min2<min1){
                printf("%d\n",1440+(min2-min1));
            }
            else if (min2>min1){
                printf("%d\n",min2-min1);
            }
            else {
                printf("%d\n", min2-min1);
            }
        }
    }
}
