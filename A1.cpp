#include<Stdio.h>
int main()
{
    int team,player,age,i,value,position=-1,flag;
    scanf("%d",&team);
    //printf("%d",team);

    for(i=0;i<=team;i++)
    {
        scanf("%d",&player);
        if(player>1 && player<10)
        {
              for(i=1;i<=player;i++)
            {
                scanf("%d",&age);
                if(age>=11 && age<=20)
                {
                    printf("%d ",age);

                }
            }
        }


           scanf("%d",&player);
        if(player>1 && player<10)
        {
              for(i=1;i<=player;i++)
            {
                scanf("%d",&age);
                 if(age>=11 && age<=20)
                {
                    printf("%d ",age);

                }

            }

        }
        int age[10];
        value=(player+1)/2;
        for(i=0;i<=player;i++)
        {
            if(i==value)
            {
              age[i]=value;
              break;
            }
        }printf("%d",i);
        }


    }


