#include <stdio.h>
#include <string.h>

int main()
{
    char s[12],n[4],r[4];
    int a,b,c,len,res,count=0;
    while(scanf("%s",&s)!=EOF){
        len = strlen(s);
        a= atoi(s);
        if(a<10){
            strncpy(n,&s[2],len-1);
            len=strlen(n);
            b=atoi(n);
            if(s[1]=="+"){
                res=a+b;
            }
            else if(s[1]=="-"){
                res=a-b;
            }
            if(b<10){
                strncpy(r,&n[2],len-1);
                c=atoi(r);
            }
            else if(b<100){
                strncpy(r,&n[3],len-2);
                c=atoi(r);
            }
            else{
                strncpy(r,&n[4],len-3);
                c=atoi(r);
            }

            if(c==res){
                count++;
            }
        }
        else if(a<100){
            strncpy(n,&s[3],len-2);
            b=atoi(n);
            if(s[2]=="+"){
                res=a+b;
            }
            else if(s[2]=="-"){
                res=a-b;
            }

            if(b<10){
                strncpy(r,&n[2],len-1);
                c=atoi(r);
            }
            else if(b<100){
                strncpy(r,&n[3],len-2);
                c=atoi(r);
            }
            else{
                strncpy(r,&n[4],len-3);
                c=atoi(r);
            }

            if(c==res){
                count++;
            }
        }
        else{
            strncpy(n,&s[4],len-3);
            b=atoi(n);
            if(s[3]=="+"){
                res=a+b;
            }
            else if(s[3]=="-"){
                res=a-b;
            }

            if(b<10){
                strncpy(r,&n[2],len-1);
                c=atoi(r);
            }
            else if(b<100){
                strncpy(r,&n[3],len-2);
                c=atoi(r);
            }
            else{
                strncpy(r,&n[4],len-3);
                c=atoi(r);
            }

            if(c==res){
                count++;
            }
        }
    }
    printf("%d\n",count);
}
