#include <stdio.h>

int main()
{
    int x,ar[20][10],i,f,j,k,count=0,count1=1;
    while(scanf("%d", &x)==1)
    {
        for(i=0; i<x; i++)
        {
            for(j=0; j<10; j++)
            {
                scanf("%d",&ar[i][j]);
            }
        }
        printf("Lumberjacks:\n");
        for(i=0; i<x; i++)
        {
            if(ar[i][0]<ar[i][1])
            {
                for(j=0; j<9; j++)
                {
                    for(k=j+1; k<10; k++)
                    {
                        f=0;
                        if(ar[i][j]<ar[i][k])f=1;
                        else break;
                    }
                    if(f==0)break;
                }
            }
            else{
               for(j=0; j<9; j++)
                {
                    for(k=j+1; k<10; k++)
                    {
                        f=0;
                        if(ar[i][j]>ar[i][k])f=1;
                        else break;
                    }
                    if(f==0)break;
                }
            }
            if(f==1)printf("Ordered\n");
            else printf("Unordered\n");
        }
    }
    return 0;
}
