#include <stdio.h>
#include <math.h>

int main()
{
    unsigned long long int n,i,fac;
    while(scanf("%llu",&n)==1)
    {
        if(n<1)
        {
            return 0;
        }
        else
        {
            fac= sqrt(n);
            if(n==(fac*fac))
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }

    }
}
