#include <stdio.h>

int main()
{
    int i,j,count,a,b,m,t;
    while(scanf("%d %d", &i,&j)==2)
    {
        printf("%d %d", i,j);
        m=0;
        if(i>j)
        {
            t=i;
            i=j;
            j=t;
        }
        for(a=i; a<=j; a++)
        {
            count=1;
            b=a;
            while(b!=1)
            {
                if(b%2==1)
                {
                    b=(3*b)+1;
                }
                else
                {
                    b=b/2;
                }
                count++;
            }
            if(m<count)
            {
                m=count;
            }
        }

        printf(" %d\n",m);
    }
    return 0;
}
