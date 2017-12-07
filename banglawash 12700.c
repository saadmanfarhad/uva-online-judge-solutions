#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,a,j;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            int n,b=0,w=0,a=0,t=0,len;
            scanf("%d",&n);
            char str[n+1];
            scanf("%s",str);
            len=strlen(str);
            for(j=0; j<len; j++)
            {
                if(str[j]=='B')
                {
                    b++;
                }
                else if(str[j]=='W')
                {
                    w++;
                }
                else if(str[j]=='T')
                {
                    t++;
                }
                else if(str[j]=='A')
                {
                    a++;
                }
            }
            if(a==n)
            {
                printf("Case %d: ABANDONED\n",i);
            }
            else if(b==(n-a))
            {
                printf("Case %d: BANGLAWASH\n",i);
            }
            else if(w==(n-a))
            {
                printf("Case %d: WHITEWASH\n",i);
            }
            else if(b>w)
            {
                printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
            }
            else if(w>b)
            {
                printf("Case %d: WWW %d - %d\n", i,w,b);
            }
            else if(b==w)
            {
                printf("Case %d: DRAW %d %d\n",i,b,t);
            }

        }
        return 0;
    }
}
