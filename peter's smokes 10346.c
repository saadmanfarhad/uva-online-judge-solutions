#include <stdio.h>

int main()
{
    int n,k;
    while(scanf("%d %d", &n,&k)!=EOF){
        int total=0,c=0;
        while(n>0){
            n=n-k;
            n=n+1;
            total=total+1;
        }
        printf("%d\n",total-1);
    }
    return 0;
}
