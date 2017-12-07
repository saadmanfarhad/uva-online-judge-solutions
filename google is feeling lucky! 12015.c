#include <stdio.h>
#include <string.h>
char web[10][101];
int ar[10];
int main()
{
    int t,i,j,k,tnum,max;
    char tstr[101];
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            for(j=0;j<10;j++){
                scanf("%s %d",web[j],&ar[j]);
            }
            for(j=0;j<9;j++){
                for(k=j;k<10;k++){
                    if(ar[j]<ar[k]){
                        tnum=ar[j];
                        ar[j]=ar[k];
                        ar[k]=tnum;
                        strcpy(tstr,web[j]);
                        strcpy(web[j],web[k]);
                        strcpy(web[k],tstr);
                    }
                }
            }
            max=ar[0];
            printf("Case #%d:\n",i);
            j=0;
            while(ar[j]==max){
                printf("%s\n",web[j]);
                j++;
            }
        }
        return 0;
    }
}
