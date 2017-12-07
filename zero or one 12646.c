#include <stdio.h>

int main()
{
    int ar[3],i;
    while(scanf("%d%d%d",&ar[0],&ar[1],&ar[2])==3){
        int zcount=0,ocount=0;
        for(i=0;i<3;i++){
            if(ar[i]==0){
                zcount++;
            }
            else{
                ocount++;
            }
        }
        if(zcount==3 || ocount==3){
            printf("*\n");
        }
        else if(zcount==2){
            for(i=0;i<3;i++){
                if(ar[i]==1){
                    if(i+1==1){
                        printf("A\n");
                    }
                    else if(i+1==2){
                        printf("B\n");
                    }
                    else{
                        printf("C\n");
                    }
                }
            }
        }
        else{
            for(i=0;i<3;i++){
                if(ar[i]==0){
                    if(i+1==1){
                        printf("A\n");
                    }
                    else if(i+1==2){
                        printf("B\n");
                    }
                    else{
                        printf("C\n");
                    }
                }
            }
        }
    }
    return 0;
}
