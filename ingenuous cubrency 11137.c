#include <stdio.h>
#include <stdlib.h>
int count(int ar[],int m,int n){
    int i, j, x, y;

    // We need n+1 rows as the table is consturcted in bottom up manner using
    // the base case 0 value case (n = 0)
    int table[n+1][m];

    for (i=0; i<m; i++)
        table[0][i] = 1;
    for (i = 1; i < n+1; i++)
    {
        for (j = 0; j < m; j++)
        {
            x = (i-ar[j] >= 0)? table[i - ar[j]][j]: 0;

            y = (j >= 1)? table[i][j-1]: 0;

            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}

int main()
{
    int X;
    while(scanf("%d", &X)==1){
        int ar[21],i;
        for(i=0;i<21;i++){
            ar[i]=(i+1)*(i+1)*(i+1);
        }
        int m=sizeof(ar)/sizeof(ar[0]);
        printf("%d\n",count(ar,m,X));
        getchar();

    }
    return 0;
}
