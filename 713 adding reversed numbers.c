#include <stdio.h>

int revNum(int a){
    int rem=0;
    while(a>0){
        rem= rem*10+(a%10);
        a=a/10;
    }
    return rem;
}

int main()
{
    freopen("test.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,a,b,i,sum;
    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            a=revNum(a);
            b=revNum(b);
            sum= a+b;
            sum=revNum(sum);
            printf("%d\n",sum);
        }
    }
    return 0;
}
