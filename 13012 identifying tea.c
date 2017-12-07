#include <stdio.h>

int main()
{
    int type,ar[5],i;
    while(scanf("%d",&type)==1){
        int count=0;
        for(i=0;i<5;i++){
            scanf("%d",&ar[i]);
            if(ar[i]==type){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
