#include <stdio.h>

int main()
{
    int i=0;
    long long int a,l,n;
    while(scanf("%lld%lld",&a,&l)==2){
        int count=0;
        if(a<0 && l<0){
            return 0;
        }
        else if(a>l){
            count++;
            printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,a,l,count);
        }
        else{
            i++;
            n=a;
            while(a<=l){
                count++;
                if(a==1){
                    break;
                }
                else if(a%2==0){
                    a=a/2;
                }
                else{
                    a=a*3+1;
                }
            }
            printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,n,l,count);
        }
    }
}
