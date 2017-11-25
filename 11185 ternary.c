#include <stdio.h>
#include <string.h>

char retVal(int num)
{
    if(num>=0 && num<=9){
        return (char)(num+'0');
    }
    else{
        return (char)(num-10+'A');
    }
}

void strev(char *str)
{
    unsigned long long int len= strlen(str);
    long long int i;
    for(i=0;i<len/2;i++){
        char t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
    }
}

char* fromDeci(char res[],long long int n)
{
    int index=0;
    while(n>0){
        res[index++]=retVal(n%3);
        n=n/3;
    }
    res[index]='\0';
    strev(res);
    return res;
}

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1){
        char res[200];
        if(n>0){
            printf("%s\n",fromDeci(res,n));
        }
        else if(n==0){
            printf("0\n");
        }
        else{
            return 0;
        }
    }
    return 0;
}
