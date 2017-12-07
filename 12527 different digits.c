#include <stdio.h>

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)==2)
    {
        int ar[10],num[10],i,j,x,rem,flag,count=0;
        for(i=m ; i<=n ; i++)
        {
            x=i;
            for(j=0; j<10; j++)
            {
                ar[j]=0;
                num[j]=j;
            }
            while(x>0)
            {
                rem=x%10;
                x=x/10;
                for(j=0; j<10; j++)
                {
                    if(rem==num[j])
                    {
                        ar[j]+=1;
                    }
                }
            }
            for(j=0; j<10; j++)
            {
                if(ar[j]>1)
                {
                    flag=0;
                    break;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
