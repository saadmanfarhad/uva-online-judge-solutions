#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
        {
            return 0;
        }
        else
        {
            int t,i=0,x,y,j,c=0;
            if(a<b)
            {
                t=a;
                a=b;
                b=t;
            }
            int ar1[10],ar2[10];
            while(a || b)
            {
                x=a%10;
                y=b%10;
                ar1[i]=x;
                ar2[i]=y;
                a=a/10;
                b=b/10;
                i++;
            }
            for(j=0; j<i; j++)
            {
                if(ar1[j]+ar2[j]>9)
                {
                    c++;
                    ar1[j+1]=ar1[j+1]+1;
                }
            }
            if(c==0)
            {
                printf("No carry operation.\n");
            }
            else if(c==1)
            {
                printf("%d carry operation.\n",c);
            }
            else{
                printf("%d carry operations.\n",c);
            }
        }
    }
}
