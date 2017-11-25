#include <stdio.h>
#include <math.h>

int main()
{
    freopen("test.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int h1,h2,m1,m2,mins;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            return 0;
        }
        else{
            if(h1==h2){
                if(m2>=m1){
                    mins=m2-m1;
                }
                else{
                    mins=1440+(m2-m1);
                }
            }
            else if(h2>h1){
                if(m2>=m1){
                    mins=((h2-h1)*60)+(m2-m1);
                }
                else{
                    mins=((h2-h1-1)*60)+(60+m2-m1);
                }
            }
            else{
                if(m2>=m1){
                    mins= ((h2+24-h1)*60)+(m2-m1);
                }
                else{
                    mins=((h2+23-h1)*60)+(60+m2-m1);
                }
            }
            printf("%d\n",mins);
        }
    }
}
