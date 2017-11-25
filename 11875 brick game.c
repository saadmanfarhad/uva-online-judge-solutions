#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int main()
{
    int t,i,n,j;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%d",&n);
            int ar[n];
            for(j=0;j<n;j++){
                scanf("%d",&ar[j]);
            }
            qsort(ar,n,sizeof(int),compare);
            printf("Case %d: %d\n",i,ar[n/2]);
        }
        return 0;
    }
}
