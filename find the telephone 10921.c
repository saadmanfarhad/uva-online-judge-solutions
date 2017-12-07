#include <stdio.h>
#include <string.h>

int main()
{
    char exp[35];
    int len,i;
    while(scanf("%s",exp)==1){
        char num[34]="";
        len=strlen(exp);
        for(i=0;i<len;i++){
            if(exp[i]=='1'){
                strcat(&num[i],"1");
            }
            else if(exp[i]=='0'){
                strcat(&num[i],"0");
            }
            else if(exp[i]>='A'&&exp[i]<='C'){
                strcat(&num[i],"2");
            }
            else if(exp[i]>='D'&&exp[i]<='F'){
                strcat(&num[i],"3");
            }
            else if(exp[i]>='G'&&exp[i]<='I'){
                strcat(&num[i],"4");
            }
            else if(exp[i]>='J'&&exp[i]<='L'){
                strcat(&num[i],"5");
            }
            else if(exp[i]>='M'&&exp[i]<='O'){
                strcat(&num[i],"6");
            }
            else if(exp[i]>='P'&&exp[i]<='S'){
                strcat(&num[i],"7");
            }
            else if(exp[i]>='T'&&exp[i]<='V'){
                strcat(&num[i],"8");
            }
            else if(exp[i]>='W'&&exp[i]<='Z'){
                strcat(&num[i],"9");
            }
            else{
                strcat(&num[i],"-");
            }
        }
        num[len]='\0';
        printf("%s\n",num);
    }
    return 0;
}
