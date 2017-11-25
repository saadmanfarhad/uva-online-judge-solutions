#include <stdio.h>
#include <math.h>

int main()
{
    double b,p,ans;
    while(scanf("%lf %lf",&p,&b)==2){
        ans= pow(b,1/p);
        printf("%.0lf\n",ans);
    }
    return 0;
}
