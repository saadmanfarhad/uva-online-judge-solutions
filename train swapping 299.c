#include <stdio.h>

int main()
{
    int n,i,j,k;
    while(scanf("%d", &n)==1){
        for(i=0;i<n;i++){
            int l,count=0,temp;
            scanf("%d", &l);
            int ar[l];
            for(j=0;j<l;j++){
                scanf("%d", &ar[j]);
            }

            for(j=0;j<l-1;j++){
                for(k=j+1;k<l;k++){
                    if(ar[j]>ar[k]){
                        temp=ar[j];
                        ar[j]=ar[k];
                        ar[k]=temp;
                        count++;
                    }
                }
            }

            printf("Optimal train swapping takes %d swaps.\n", count);

        }
    }
    return 0;
}
