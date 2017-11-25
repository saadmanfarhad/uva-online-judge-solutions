#include <stdio.h>

int main()
{
    int t,i,a,f,j,k,l,x,y;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            int n=1;
            scanf("%d %d",&a,&f);
            for(j=1; j<=f; j++)
            {
                if(a!=0)
                {
                    if(j==f)
                    {
                        for(k=1; k<=a; k++)
                        {
                            for(l=1; l<=k; l++)
                            {
                                printf("%d",n);
                            }
                            n++;
                            printf("\n");
                            if(k==a)
                            {
                                n--;
                                for(x=k-1; x>0; x--)
                                {
                                    n--;
                                    for(y=x; y>0; y--)
                                    {
                                        printf("%d",n);
                                    }
                                    printf("\n");
                                }
                            }
                        }
                        if(i!=t)
                        {
                            printf("\n");
                        }
                    }
                    else
                    {
                        for(k=1; k<=a; k++)
                        {
                            for(l=1; l<=k; l++)
                            {
                                printf("%d",n);
                            }
                            n++;
                            printf("\n");
                            if(k==a)
                            {
                                n--;
                                for(x=k-1; x>0; x--)
                                {
                                    n--;
                                    for(y=x; y>0; y--)
                                    {
                                        printf("%d",n);
                                    }
                                    printf("\n");
                                }
                                printf("\n");
                            }
                        }
                    }
                }
                else
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}

