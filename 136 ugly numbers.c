#include <stdio.h>
#include <math.h>

int main()
{
    int num=2,count=1,n,flag1=0,flag2=0,i;
    n=num;
    while(count!=1500)
    {
        while (n%2 == 0)
        {
            n = n/2;
        }
        for (i = 3; i <= sqrt(n); i = i+2)
        {
            while (n%i == 0)
            {
                printf("%d ", i);
                if(i!= 3 || i!=5){
                    flag2=1;
                    n = n/i;
                    break;
                }
            }
            if(flag1==1){
                flag2=1;
                break;
            }
        }
        num++;
        n=num;
        if(flag2!=1){
            count++;
        }
    }
    printf("%d\n",num);
    return 0;
}
