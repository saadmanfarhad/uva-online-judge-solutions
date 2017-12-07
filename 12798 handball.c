#include <stdio.h>

int main()
{
    int n,m,i,j;
    while(scanf("%d%d",&n,&m)==2){
        int ar[n][m],f[n][1],count=0;
        for(i=0;i<n;i++){
            f[i][0]=0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&ar[i][j]);
                if(ar[i][j]>0){
                    f[i][0]+=1;
                }
            }
        }
        for(i=0;i<n;i++){
            if(f[i][0]==m){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
