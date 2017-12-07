#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    long long int ar[10000];
    long long int n,t;
    long long int x,y,i=0;
    while(scanf("%lld", &n)==1){
        ar[i]=n;
        i++;
        qsort(ar,i,sizeof(long long int),cmpfunc);
        if(i==1){
            printf("%lld\n",ar[0]);
        }
        else if(i%2==1){
            x=(i/2);
            printf("%lld\n",ar[x]);
        }
        else if(i%2==0){
            x=i/2;
            y=(i/2)-1;
            printf("%lld\n",(ar[x]+ar[y])/2);
        }
    }
    return 0;
}
