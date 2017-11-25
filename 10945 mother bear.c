#include <stdio.h>
#include <string.h>

void strev(char *str)
{
    int len= strlen(str);
    int i;
    for(i=0; i<len/2; i++)
    {
        char t=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=t;
    }
}

int main()
{
    char str[100],str2[100],str3[100];
    int len,i,j;
    while(gets(str))
    {
        if(strcmp(str,"DONE")==0)
        {
            return 0;
        }
        else
        {
            len=strlen(str);
            j=0;
            for(i=0; str[i]; i++)
            {
                str[i]=tolower(str[i]);
                if(str[i]>='a' && str[i]<='z')
                {
                    str2[j]=str[i];
                    str3[j]=str[i];
                    j++;
                }
            }
            str2[j]='\0';
            str3[j]='\0';
            strev(str3);
            if(strcmp(str2,str3)==0)
            {
                printf("You won't be eaten!\n");
            }
            else
            {
                printf("Uh oh..\n");
            }
        }
    }
}
