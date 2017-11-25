#include <stdio.h>

int main()
{
    int t,i,j;
    while(scanf("%d",&t)==1){
        if(t==0){
            return 0;
        }
        else{
            int min=25,count=0,total=0,space;
            char str[t][26];

            for(i=0;i<t;i++){
                scanf(" %[^\n]s",str[i]);
            }
            for(i=0;i<t;i++){
                count=0;
                for(j=0;j<25;j++){
                    if(str[i][j]=='X'){
                        count++;
                    }
                }
                space=25-count;
                total+=space;
                if(space<min){
                    min=space;
                }
            }
            printf("%d\n",total-(min*t));

        }

    }
}
