#include <stdio.h>
int main()
{
    char c[10000];
    int len,i;
    while(fgets(c,10000,stdin)){
        printf("%s",c);
    }
    return 0;
}
