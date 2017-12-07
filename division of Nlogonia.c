#include <stdio.h>

int main()
{
    int k,i,x,y,m,n;
    while(scanf("%d", &k)==1){
        if(k!=0){
            scanf("%d %d", &x,&y);
            for(i=0;i<k;i++){
                scanf("%d %d", &m, &n);
                if(m==x || n==y){
                    printf("divisa\n");
                }
                else if(m>x && n>y){
                    printf("NE\n");
                }
                else if(m<x && n>y){
                    printf("NO\n");
                }
                else if(m>x && n<y){
                    printf("SE\n");
                }
                else{
                    printf("SO\n");
                }
            }
        }
        else return 0;
    }
    return 0;
}
