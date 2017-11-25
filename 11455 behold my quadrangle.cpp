#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int cmpfunc (const void * a, const void * b)
{
   return ( *(unsigned long long int*)a - *(unsigned long long int*)b );
}

int main()
{
    freopen("test.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    unsigned long long int ar[4];
    while(scanf("%d",&t)==1){
        for(int i=1;i<=t;i++){
            for(int j=0;j<4;j++){
                scanf("%llu",&ar[j]);
            }
            qsort(ar,4,sizeof(long long int),cmpfunc);
            if((ar[0]==ar[1])&&(ar[1]==ar[2])&&(ar[2]==ar[3])){
                cout << "square" << endl;
            }
            else if(ar[0]==ar[1]&&ar[2]==ar[3]){
                cout << "rectangle" << endl;
            }
            else if((ar[0]+ar[1]+ar[2]>ar[3])&&(ar[0]!=0)){
                cout << "quadrangle" <<endl;
            }
            else{
                cout << "banana" << endl;
            }
        }
    }
}
