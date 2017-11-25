#include <stdio.h>
#include <math.h>
#define pi acos(-1)

int main()
{
    int t,i,l;
    double w,r;
    double garea,rarea;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&l);
            w=((double)l*6)/10;
            r=((double)l/5);
            rarea=pi*pow(r,2);
            garea=(l*w)-rarea;
            printf("%.2lf %.2lf\n",rarea,garea);
        }
        return 0;
    }
}
