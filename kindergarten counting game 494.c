#include <stdio.h>

int main()
{
    int i,count,word;
    char str[1000];
    while(gets(str)){
        count=0;
        word=1;
        for(i=0;str[i];i++){
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
                if(word){
                    count++;
                    word=0;
                }
            }
            else{
                    word=1;
            }

        }
        printf("%d\n",count);
    }
    return 0;
}
