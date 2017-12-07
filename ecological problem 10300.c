#include <stdio.h>

int main()
{
    int t,i;
    while(scanf("%d", &t)==1){
        for(i=0;i<t;i++){
            int f,j,k;
            scanf("%d", &f);
            int ar[f][3];
            float sum=0;
            for(j=0;j<f;j++){
                for(k=0;k<3;k++){
                    scanf("%d", &ar[j][k]);
                }
            }

            for(j=0;j<f;j++){
                sum=sum+(((float)ar[j][0]/(float)ar[j][1])*ar[j][2]*ar[j][1]);
            }
            printf("%.0f\n", sum);
        }
    }
    return 0;
}
