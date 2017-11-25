#include <stdio.h>
#include <string.h>

int isPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i,j,k;
    char str[21],a[27],A[27],s,t;
    int v1[26],v2[26],x=1,y=27;
    for(i=0,s='a',t='A'; s<='z',t<='Z'; s++,t++,i++)
    {
        a[i]=s;
        v1[i]=x++;
        A[i]=t;
        v2[i]=y++;
    }
    while(scanf("%s",str)==1)
    {
        int prime,sum=0,len;
        len=strlen(str);
        for(j=0; j<len; j++)
        {
            if(str[j]>='a' && str[j]<='z')
            {
                for(k=0; k<26; k++)
                {
                    if(str[j]==a[k])
                    {
                        sum+=v1[k];
                    }
                }
            }
            else if(str[j]>='A' && str[j]<='Z')
            {
                for(k=0; k<26; k++)
                {
                    if(str[j]==A[k])
                    {
                        sum+=v2[k];
                    }
                }
            }
        }
        prime=isPrime(sum);
        if(prime==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
    return 0;
}

