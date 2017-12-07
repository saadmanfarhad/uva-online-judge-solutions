#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,k;
    char words[3][6]={  "one",
                        "two",
                        "three"};
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            char s[6];
            int slen,num,flag;
            scanf("%s",s);
            slen=strlen(s);
            if(slen==3){
                for(j=0;j<2;j++){
                    flag=0;
                    for(k=0;k<slen;k++){
                        if(s[k]==words[j][k]){
                            flag++;
                        }
                        if(flag==2){
                            if(j==0){
                                num=1;
                                break;
                            }
                            else{
                                num=2;
                                break;
                            }
                        }
                    }
                }
                printf("%d\n",num);
            }
            else{
                for(j=2;j<3;j++){
                    flag=0;
                    for(k=0;k<slen;k++){
                        if(s[k]==words[j][k]){
                            flag++;
                        }
                        if(flag==4){
                            num=3;
                            break;
                        }
                    }
                }
                printf("%d\n",num);
            }
        }
        return 0;
    }
}
