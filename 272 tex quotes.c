#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000];
    int i,len,count;
    while(fgets(str,1000,stdin)){
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]=='"'){
                count++;
                if(count%2==1){
                    printf("``");
                }
                else{
                    printf("''");
                }
            }
            else{
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}
