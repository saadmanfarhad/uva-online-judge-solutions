#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

int main()
{
    unsigned long long int t,i,j,k,temp;
    unsigned long long int m,w;
    while(scanf("%llu",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%llu %llu",&m,&w);
            int ar[m];
            unsigned long long int sum=0,count=0;
            for(j=0;j<m;j++){
                scanf("%d",&ar[j]);
            }
            qsort(ar,m,sizeof(int),compare);
            j=0;
            for(j=0;j<m;j++){
                sum+=ar[j];
                if(sum<=w){
                    count++;
                }
            }
            printf("%llu\n",count);
        }
        return 0;
    }
}
