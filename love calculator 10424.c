#include <stdio.h>
#include <string.h>

int retval(int n){
    int rem,num=0;
    while(n){
        rem=n%10;
        n=n/10;
        num=num+rem;
    }
    if(num%10==num){
        return num;
    }
    else{
        retval(num);
    }
}

int main()
{
    char n1[26],n2[26],alp[26],alpcap[26],c,d;
    int len1,len2,val[26],i,j;
    for(i=0,c='a',d='A';i<26;i++,c++,d++){
        alp[i]=c;
        alpcap[i]=d;
        val[i]=i+1;
    }
    while(fgets(n1,26,stdin)&&fgets(n2,26,stdin)){
        int val1=0,val2=0,v;
        len1=strlen(n1);
        len2=strlen(n2);
        for(i=0;i<len1;i++){
            for(j=0;j<26;j++){
                if(n1[i]==alp[j]||n1[i]==alpcap[j]){
                    val1=val1+val[j];
                }
            }
        }
        for(i=0;i<len2;i++){
            for(j=0;j<26;j++){
                if(n2[i]==alp[j]||n2[i]==alpcap[j]){
                    val2=val2+val[j];
                }
            }
        }
        val1=retval(val1);
        val2=retval(val2);
        if(val1>=val2){
            printf("%.2lf %c\n",((double)val2/(double)val1)*100,'%');
        }
        else{
            printf("%.2lf %c\n",((double)val1/(double)val2)*100,'%');
        }
    }
    return 0;
}
