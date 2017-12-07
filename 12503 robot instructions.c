#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,n,j,k;
    char str[13];
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            int count=0;
            scanf("%d",&n);
            int ar[n];
            for(j=0;j<n;j++){
                scanf(" %[^\n]s",str);
                if(strcmp(str,"RIGHT")==0){
                    ar[j]=1;
                    count+=1;
                }
                else if(strcmp(str,"LEFT")==0){
                    ar[j]=0;
                    count-=1;
                }
                else{
                    k=atoi(&str[8]);
                    if(ar[k-1]==0){
                        count-=1;
                        ar[j]=0;
                    }
                    else{
                        count+=1;
                        ar[j]=1;
                    }
                }
            }
            printf("%d\n",count);
        }
        return 0;
    }
}
