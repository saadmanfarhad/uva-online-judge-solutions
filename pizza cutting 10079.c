#include <stdio.h>

int main()
{
    long long int line;
    while(scanf("%lld", &line)==1){
        if(line<0){
            return 0;
        }
        else{
            if(line==0){
                printf("%lld\n",1);
            }
            else{
                printf("%lld\n",((line*(line+1))/2)+1);
            }
        }
    }
}
