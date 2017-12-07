#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,m,n,sum=0;
    char req[7];
    while(scanf("%d", &t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%s", req);
            if(strcmp(req,"report")==0)
            {
                printf("%d\n", sum);
            }
            else if(strcmp(req,"donate")==0)
            {
                scanf("%d", &m);
                sum=sum+m;
            }

        }
        return 0;
    }
}
