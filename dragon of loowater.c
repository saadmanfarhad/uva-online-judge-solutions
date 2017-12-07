#include <stdio.h>

int main()
{
    int a,b;
    while((scanf("%d %d", &a,&b)==2)&& a!=0 && b!=0){
            if(a>b){
                printf("Loowater is doomed\n");
            }
            else if(a==b){
                int h[a],he[b],i,j,sum=0;
                for(i=0;i<a;i++){
                    scanf("%d",&h[i]);
                }
                for(i=0;i<b;i++){
                    scanf("%d", &he[i]);
                }
                for(i=0;i<a;i++){
                    for(j=0;j<a;j++){
                        if(h[i]>he[j]){
                            printf("Loowater is doomed");
                        }
                        else{
                            for(i=0;i<a;i++){
                                sum=sum+he[i];
                            }
                            printf("%d\n", sum);
                        }
                    }
                }
            }
    }
    return;
}
