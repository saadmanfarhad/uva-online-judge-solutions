#include <cstdio>
#include <iostream>
using namespace std;

long long int h(long long int n){
    long long int res=0,i;
    for(i=1;i<=n;i++){
        printf("C\n");
        res=res+n/i;
    }
    return res;
}

int main()
{
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    long long int result,n;
    while(scanf("%d",&t)==1){
        for(int i=1;i<=t;i++){
            scanf("%lld",&n);
            result=h(n);
            printf("%lld\n",result);
        }
        return 0;
    }
}
