#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t,i,j,k,val[26],x;
    char plt[9],dig[5],alp[27],c;
    for(x=0,c='A';x<26,c<='Z';x++,c++){
        val[x]=x;
        alp[x]=c;
    }
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            int sum=0,l=2,alsum;
            scanf("%s",plt);
            strncpy(dig,plt+4,5);
            dig[4]='\0';
            for(j=0;j<3;j++){
                for(k=0;k<26;k++){
                    if(plt[j]==alp[k]){
                        alsum=val[k];
                        for(x=0;x<l;x++){
                            alsum=alsum*26;
                        }
                        sum=sum+alsum;
                    }
                }
                l--;
            }
            sum=abs(sum-atoi(dig));
            if(sum<=100){
                printf("nice\n");
            }
            else{
                printf("not nice\n");
            }
        }
        return 0;
    }
}
