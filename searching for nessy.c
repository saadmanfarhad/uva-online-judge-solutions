#include <stdio.h>

int main()
{
    int i,m,n,k;
    while(scanf("%d", &k)==1){
        for(i=0;i<k;i++){
            scanf("%d %d", &m, &n);
            printf("%d\n", (m/3)*(n/3));
        }
    }
    return 0;
}
