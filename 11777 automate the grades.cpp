#include <cstdio>
#include <cstdlib>
using namespace std;

int compare(const void *a, const void *b){
    return (*(int*)b-*(int *)a);
}

int main()
{
    int t,trm1,trm2,fin,attd,ct[3],avgct;
    while(scanf("%d",&t)==1){
        for(int i=1;i<=t;i++){
            int sum=0;
            scanf("%d %d %d %d",&trm1,&trm2,&fin,&attd);
            for(int j=0;j<3;j++){
                scanf("%d",&ct[j]);
            }
            qsort(ct,3,sizeof(int),compare);
            avgct=(ct[0]+ct[1])/2;
            sum= trm1+trm2+fin+attd+avgct;
            if(sum>=90){
                printf("Case %d: A\n",i);
            }
            else if(sum>=80){
                printf("Case %d: B\n",i);
            }
            else if(sum>=70){
                printf("Case %d: C\n",i);
            }
            else if(sum>=60){
                printf("Case %d: D\n",i);
            }
            else{
                printf("Case %d: F\n",i);
            }
        }
        return 0;
    }
}
