#include <stdio.h>

int primeAndPalindrome(int n){
    int rem=0,t=10,num=n,f=0,i;
    while(n>0){
        rem = (rem*10)+(n%10);
        n=n/10;
    }
    if(num==rem){
        for(i=2;i<num;i++){
            if(num%i==0){
                f=0;
                break;
            }
            else{
                f=1;
            }
        }
        if(f==1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}

int main(){
    int n,check;
    while(scanf("%d",&n)==1){
        check=primeAndPalindrome(n);
        if(check==1 || n==1 || n==2){
            printf("%d\n",n*2);
            return 0;
        }
        else{
            printf("%d\n",n*2);
        }
    }
}
