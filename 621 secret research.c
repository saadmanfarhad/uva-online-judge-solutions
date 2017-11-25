#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,len,inum;
    char num[10010],q[4],neg[3];
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%s",num);
            len= strlen(num);
            if(strcmp(num,"1")==0 || strcmp(num,"4")==0 || strcmp(num,"78")==0){
                printf("+\n");
            }
            else if(num[len-1]=='5' && num[len-2]=='3'){
                printf("-\n");
            }
            else if(num[len-1]=='4' && num[0]=='9'){
                printf("*\n");
            }
            else if(num[0]=='1' && num[1]=='9' && num[2]=='0'){
                printf("?\n");
            }
            else{
                printf("?\n");
            }
        }
        return 0;
    }
}
