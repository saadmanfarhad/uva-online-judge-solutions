#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int c[7],i;
    for(i=1;;i++){
        scanf("%s",c);
        if(strcmp(c,"*")==0){
            return 0;
        }
        else{
            if(strcmp(c,"Hajj")==0){
                printf("Case %d: Hajj-e-Akbar\n",i);
            }
            else{
                printf("Case %d: Hajj-e-Asghar\n",i);
            }
        }
    }
}
