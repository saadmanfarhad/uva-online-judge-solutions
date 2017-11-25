#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int len,i;
    while(fgets(str,1000,stdin)){
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]!='\n'){
                printf("%c",str[i]-7);
            }
            else{
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}
