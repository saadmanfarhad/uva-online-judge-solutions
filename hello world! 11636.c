#include <stdio.h>

int main()
{
    int i=0,num;
    while(scanf("%d",&num)==1){
        if(num>0){
            int sum=1,count=0;
            i++;
            while(sum<num){
                sum+=sum;
                count++;
            }
            printf("Case %d: %d\n",i,count);
        }
        else{
            return 0;
        }
    }
}
