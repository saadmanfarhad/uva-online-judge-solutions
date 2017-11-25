#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
//    freopen("test.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    char time[6];
    int len;
    int a,b;
    double ang;
    while(scanf("%s",time)){
        if(strcmp(time,"0:00")==0){
            break;
        }
        else{
            char m[3];
            len=strlen(time);
            if(len==5){
                a=atof(time);
                strncpy(m,time+3,2);
                m[2]='\0';
                b=atoi(m);
                ang=abs(((0.5*3.1415)/180)*(60*a+b)-((6*3.1415)/180)*b);
                printf("%f %f\n",m,(double)b);
            }
            else{
                a=atof(time);
                strncpy(m,time+2,2);
                m[2]='\0';
                b=atoi(m);
                ang=abs(((0.5*3.1415)/180)*(60*a+b)-((6*3.1415)/180)*b);
                printf("%f %f",a,b);
            }
        }
    }
}
