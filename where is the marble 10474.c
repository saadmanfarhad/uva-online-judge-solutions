#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a-*(int*)b);
}

int main()
{
    freopen("test.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,q,i=0,j,k,temp;
    while(scanf("%d%d",&n,&q)==2){
        i++;
        int mar[n],que,flag,pos;
        if(n==0 && q==0){
            return 0;
        }
        else{
            for(j=0;j<n;j++){
                scanf("%d",&mar[j]);
            }
            qsort(mar,n,sizeof(int),compare);
            printf("CASE# %d:\n",i);
            for(j=0;j<q;j++){
                flag=0;
                scanf("%d",&que);
                for(k=0;k<n;k++){
                    if(mar[k]==que){
                        flag=1;
                        pos=k+1;
                        printf("%d found at %d\n",que,pos);
                        break;
                    }
                }
                if(flag==0){
                    printf("%d not found\n",que);
                }
            }
        }
    }
    return 0;
}
