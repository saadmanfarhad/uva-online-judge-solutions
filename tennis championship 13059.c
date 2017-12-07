#include <stdio.h>

unsigned long long int count_match(unsigned long long int n){
    unsigned long long int sum=0,m=0,count=0;
    while(m!=1){
        if(n%2==1){
            n=n-1;
            count++;
        }
        m=n/2;
        sum+=m;
        n=n-m;
    }
    sum=sum+count;
    return sum;
}

int main()
{
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    unsigned long long int p,match;
    while(scanf("%llu",&p)==1){
        if(p==1){
            printf("%d\n",0);
        }
        else{
            if(p%2==0){
                match=count_match(p);
                printf("%llu\n",match);
            }
            else{
                p=p-1;
                match=count_match(p);
                printf("%llu\n",match+1);
            }
        }
    }
    return 0;
}
