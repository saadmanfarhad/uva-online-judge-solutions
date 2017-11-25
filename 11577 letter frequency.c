#include <stdio.h>
#include <string.h>

int main()
{
    int n,len,j,ar[26],i,k,index=0,temp,max;
    char c[202],alp[26],a;
    while(scanf("%d\n",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            gets(c);
            len = strlen(c);
            while( c[index] )
            {
                c[index]=(tolower(c[index]));
                index++;
            }
            for(j=0,a='a'; j<26; j++,a++)
            {
                ar[j]=0;
                alp[j]=a;
            }
            for(j=0; j<len; j++)
            {
                if(c[j]>= 'a' && c[j] <= 'z')
                {
                    for(k=0; k<26; k++)
                    {
                        if(c[j]==alp[k])
                        {
                            ar[k]+=1;
                        }
                    }
                }
            }
            for(j=0; j<25; j++){
                for(k=j+1;k<26;k++){
                    if(ar[j]<ar[k]){
                        temp=ar[j];
                        ar[j]=ar[k];
                        ar[k]=temp;

                        a=alp[j];
                        alp[j]=alp[k];
                        alp[k]=a;
                    }
                }
            }
            max=ar[0];
            for(j=0;j<26;j++){
                if(max!=ar[j]){
                    alp[j]='\0';
                }
            }
            printf("%s\n",alp);

        }
        return 0;
    }
}
