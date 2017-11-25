#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,count,len,sum;
    char str[81];
    while(scanf("%d",&t)==1){
        for(i=0;i<t;i++){
            scanf("%s",str);
            len=strlen(str);
            count=0;
            sum=0;
            for(j=0;j<len;j++){
                if(str[j]=='O'){
                    count++;
                }
                else{
                    count=0;
                }
                sum=sum+(count*1);
            }
            printf("%d\n",sum);
        }
        return 0;
    }
}
