#include <stdio.h>

int main()
{
    double h,u,d,f;
    int i;
    while(scanf("%lf %lf %lf %lf", &h,&u,&d,&f)==4)
    {
        if(h==0)
        {
            return 0;
        }
        else
        {
            double he=0,u2=u;
            for(i=1;; i++)
            {
                if(i==1)
                {
                    he=he+u;
                    if(he>h)
                    {
                        printf("success on day %d\n",i);
                        break;
                    }
                    else if(he-d<0)
                    {
                        printf("failure on day %d\n",i);
                        break;
                    }
                    else
                    {
                        he=he-d;
                    }
                }
                else
                {
                    u=(u-(u2*(f/100)));
                    if(u<0)
                    {
                        he=he-d;
                        if(he<0)
                        {
                            printf("failure on day %d\n",i);
                            break;
                        }
                    }
                    else
                    {
                        he=he+u;
                        if(he-d<0)
                        {
                            printf("failure on day %d\n",i);
                            break;
                        }
                        else if(he>h)
                        {
                            printf("success on day %d\n",i);
                            break;
                        }
                        else
                        {
                            he=he-d;
                        }
                    }
                }
            }
        }
    }
}
