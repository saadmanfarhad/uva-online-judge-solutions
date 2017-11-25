#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    long long int b1,b2,b3,g1,g2,g3,c1,c2,c3;
    while(scanf("%lld%lld%lld%lld%lld%lld%lld%lld%lld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9){
        long long int min=pow(2,31),mov;
        char temp[4]="BCG",order[4];
        if(strcmp(temp,"BCG")==0){
            mov=g1+c1+b2+g2+b3+c3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        strcpy(temp,"BGC");
        if(strcmp(temp,"BGC")==0){
            mov=g1+c1+b2+c2+b3+g3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        strcpy(temp,"CBG");
        if(strcmp(temp,"CBG")==0){
            mov=g1+b1+c2+g2+b3+c3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        strcpy(temp,"CGB");
        if(strcmp(temp,"CGB")==0){
            mov=g1+b1+b2+c2+g3+c3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        strcpy(temp,"GBC");
        if(strcmp(temp,"GBC")==0){
            mov=b1+c1+g2+c2+g3+b3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        strcpy(temp,"GCB");
        if(strcmp(temp,"GCB")==0){
            mov=b1+c1+b2+g2+g3+c3;
            if(mov < min){
                min = mov;
                strcpy(order,temp);
            }
        }

        printf("%s %lld\n",order,min);
    }
    return 0;
}
