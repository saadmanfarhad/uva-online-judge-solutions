#include <stdio.h>

int main()
{
    int t,i,c,d;
    while(scanf("%d", &t)==1)
    {
        for(i=1; i<=t; i++)
        {
            double cel,f,f1;
            scanf("%d %d", &c,&d);
            f=((9*(double)c)/5)+(double)d;
            cel=(f*5)/9;
            printf("Case %d: %.2lf\n", i,cel);
        }
        return 0;
    }
}
