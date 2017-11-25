#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    int len,i,j;
    while(scanf("%s",s)!=EOF){
        len=strlen(s);
        char o[30];
        o[0]='\0';
        for(i=0;i<len;i++){
            if(i==0){
                if(s[i]=='B' || s[i]=='F'||s[i]=='P'||s[i]=='V'){
                    strcat(o,"1");
                }
                else if(s[i]=='C' || s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q' || s[i]=='S'||s[i]=='X'||s[i]=='Z'){
                    strcat(o,"2");
                }
                else if(s[i]=='D' || s[i]=='T'){
                    strcat(o,"3");
                }
                else if(s[i]=='L'){
                    strcat(o,"4");
                }
                else if(s[i]=='M' || s[i]=='N'){
                    strcat(o,"5");
                }
                else if(s[i]=='R'){
                    strcat(o,"6");
                }
            }
            else{
                if((s[i]=='B' || s[i]=='F'||s[i]=='P'||s[i]=='V')&&(s[i-1]!='B' && s[i-1]!='F'&&s[i-1]!='P'&&s[i-1]!='V')){
                    strcat(o,"1");
                }
                else if((s[i]=='C' || s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q' || s[i]=='S'||s[i]=='X'||s[i]=='Z')
                        && (s[i-1]!='C' && s[i-1]!='G'&&s[i-1]!='J'&&s[i-1]!='K'&&s[i-1]!='Q' && s[i-1]!='S'&&s[i-1]!='X'&&s[i-1]!='Z')){
                    strcat(o,"2");
                }
                else if((s[i]=='D' || s[i]=='T')&&(s[i-1]!='D' && s[i-1]!='T')){
                    strcat(o,"3");
                }
                else if((s[i]=='L')&&(s[i-1]!='L')){
                    strcat(o,"4");
                }
                else if((s[i]=='M' || s[i]=='N')&&(s[i-1]!='M' && s[i-1]!='N')){
                    strcat(o,"5");
                }
                else if((s[i]=='R')&&(s[i-1]!='R')){
                    strcat(o,"6");
                }
            }
        }
        printf("%s\n",o);
    }
    return 0;
}
