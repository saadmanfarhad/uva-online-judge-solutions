#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int ar[3001];
    while(scanf("%d", &n)!=EOF)
    {
        int ar[n],arr[n-1],i,ch[n-1],dif,j,fl=1;
        for(i=0;i<n;i++){
            scanf("%d", &ar[i]);
        }
        for(i=0;i<n-1;i++){
            arr[i]=i+1;
        }
        for(i=0;i<n-1;i++){
            ch[i]=0;
        }
        for(i=0;i<n-1;i++){
            dif=ar[i]-ar[i+1];
            dif=abs(dif);
            for(j=0;j<n-1;j++){
                if(dif==arr[j]){
                    ch[j]=1;
                }
            }
        }
        for(i=0;i<n-1;i++){
            if(ch[i]==0){
                fl=0;
                printf("Not jolly\n");
                break;
            }
        }
        if(fl==1){
            printf("Jolly\n");
        }

    }
    return 0;
}
