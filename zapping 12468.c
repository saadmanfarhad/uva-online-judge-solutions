#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
        {
            return 0;
        }
        else
        {
            if(a<b)
            {
                if((a+100-b)<=(abs(a-b)))
                {
                    printf("%d\n", a+100-b);
                }
                else
                {
                    printf("%d\n",abs(a-b));
                }
            }
            else
            {
                if((b+100-a)<=(abs(a-b)))
                {
                    printf("%d\n", b+100-a);
                }
                else
                {
                    printf("%d\n",abs(a-b));
                }
            }
        }
    }
}
