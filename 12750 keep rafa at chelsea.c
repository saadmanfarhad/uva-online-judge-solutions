#include <stdio.h>

int main()
{
    int t,i,j;
    char c;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            int m=0,limit=0,match;
            scanf("%d",&match);
            char ar[match][2];
            for(j=0; j<match; j++)
            {
                scanf("%s",&ar[j]);
            }
            for(j=0; j<match; j++)
            {
                if(limit==3)
                {
                    break;
                }
                else
                {
                    m++;
                    if(ar[j][0]=='L' || ar[j][0]=='D')
                    {
                        limit++;
                    }
                    else{
                        limit=0;
                    }
                }
            }
            if(m==match && limit!=3)
            {
                printf("Case %d: Yay! Mighty Rafa persists!\n",i);
            }
            else
            {
                printf("Case %d: %d\n",i,m);
            }
        }
        return 0;
    }

}
