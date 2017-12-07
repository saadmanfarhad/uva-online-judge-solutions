#include <stdio.h>

int main()
{
    int n,i,m;
    while(scanf("%d", &n)==1){
        for(i=0;i<n;i++){
            scanf("%d", &m);
            m=m*567;
            m=m/9;
            m=m+7492;
            m=m*235;
            m=m/47;
            m=m-498;
            m=m/10;
            m=m%10;
            if(m<0){
                m=m*(-1);
            }
            printf("%d\n", m);
        }
    }
    return 0;
}
