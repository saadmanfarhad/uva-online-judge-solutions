#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i;
    double j;
    while(scanf("%d %d", &a, &b)==2 && (a!=0 || b!=0))
    {
        int count=0;
        for (i=a; i<=b; i++)
        {
            j=sqrt(i);
            if(j-(int)j==0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
