#include<stdio.h>

int main()
{
    int t,i;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            long long int a,b,c;
            scanf("%lld%lld%lld",&a,&b,&c);
            if(a+b>c && a+c>b && b+c>a){
                if(a==b && b==c){
                    printf("Case %d: Equilateral\n",i);
                }
                else if(a==b || a==c || b==c){
                    printf("Case %d: Isosceles\n",i);
                }
                else{
                    printf("Case %d: Scalene\n",i);
                }
            }
            else{
                printf("Case %d: Invalid\n",i);
            }
        }
        return 0;
    }
}
