#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    int t,i=0;
    while(scanf("%d",&t)==1){
        double u,v,ti,s,ac;
        i++;
        if(t==0){
            return 0;
        }
        else if(t==1){
            scanf("%lf %lf %lf",&a,&b,&c);
            ac=(b-a)/c;
            s=(a*c)+(.5*ac*c*c);
            printf("Case %d: %.3lf %.3lf\n",i,s,ac);
        }
        else if(t==2){
            scanf("%lf %lf %lf",&a,&b,&c);
            ti=(b-a)/c;
            s=(a*ti)+(.5*c*ti*ti);
            printf("Case %d: %.3lf %.3lf\n",i,s,ti);
        }
        else if(t==3){
            scanf("%lf %lf %lf",&a,&b,&c);
            v=sqrt((a*a)+(2*b*c));
            ti=(v-a)/b;
            printf("Case %d: %.3lf %.3lf\n",i,v,ti);
        }
        else if(t==4){
            scanf("%lf %lf %lf",&a,&b,&c);
            u=sqrt((a*a)-(2*b*c));
            ti=(a-u)/b;
            printf("Case %d: %.3lf %.3lf\n",i,u,ti);
        }
    }
}
