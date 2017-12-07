#include <stdio.h>
#include <string.h>

int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    char sl[n*2][102],sen[102];
    for(i=0;i<n*2;i++){
        scanf(" %[^\n]",&sl[i]);
    }

    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf(" %[^\n]",&sen);
        for(j=0;j<n*2;j+=2){
            if(strcmp(sen,sl[j])==0){
                printf("%s\n",sl[j+1]);
                break;
            }
        }
    }
    return 0;
}
