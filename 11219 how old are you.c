#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t,i;
    char cd[11],bd[11];
    int cday,cmon,cyear,bday,bmon,byear,age;
    while(scanf("%d",&t)==1){
        for(i=1;i<=t;i++){
            scanf("%s",cd);
            scanf("%s",bd);

            cday = atoi(cd);
            cmon = atoi(&cd[3]);
            cyear = atoi(&cd[6]);

            bday = atoi(bd);
            bmon = atoi(&bd[3]);
            byear = atoi(&bd[6]);

            if(strcmp(cd,bd)==0){
                printf("Case #%d: %d\n",i,0);
            }
            else{
                if(byear==cyear){
                    if(cmon==bmon && cday<bday){
                        printf("Case #%d: Invalid birth date\n",i);
                    }
                    else if(cmon<bmon){
                        printf("Case #%d: Invalid birth date\n",i);
                    }
                    else{
                        printf("Case #%d: %d\n",i,0);
                    }
                }
                else if(byear>cyear){
                    printf("Case #%d: Invalid birth date\n",i);
                }
                else{
                    if(cmon<bmon){
                        age= cyear-byear-1;
                        if(age<=130){
                            printf("Case #%d: %d\n",i,age);
                        }
                        else{
                            printf("Case #%d: Check birth date\n",i);
                        }
                    }
                    else if(bmon==cmon && cday>=bday){
                        age= cyear-byear;
                        if(age<=130){
                            printf("Case #%d: %d\n",i,age);
                        }
                        else{
                            printf("Case #%d: Check birth date\n",i);
                        }
                    }
                    else if(cmon==bmon && cday<bday){
                        age= cyear-byear-1;
                        if(age<=130){
                            printf("Case #%d: %d\n",i,age);
                        }
                        else{
                            printf("Case #%d: Check birth date\n",i);
                        }
                    }
                    else if(cmon>bmon){
                        age= cyear-byear;
                        if(age<=130){
                            printf("Case #%d: %d\n",i,age);
                        }
                        else{
                            printf("Case #%d: Check birth date\n",i);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
