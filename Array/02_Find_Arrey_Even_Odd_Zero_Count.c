#include<stdio.h>
#include<conio.h>

#define size 5
int main()
{
    int i = 0 , Ocnt = 0 , Ecnt = 0 , Zcnt = 0 ;
    int Num[size] = {};

    for(i = 0 ; i < size ; i++)
    {
       printf(" \n Enter %d number =>",i+1);
       scanf("%d",&Num[i]);

    }

    printf(" \n\n =====================*******===================== \n ");

    for(i = 0 ; i < size ; i++)
    {
            if(Num[i] % 2 == 1)
            {
                Ocnt++;
            }
              if(Num[i] % 2 == 0)
            {
                Ecnt++;
            }
             if(Num[i] == 0)
            {
                Zcnt++;
            }


    }



    printf(" \n\n Array Odd digits is   => %d",Ocnt);
    printf(" \n\n Array Even digits is   => %d",Ecnt);
    printf(" \n\n Array Zero digits is   => %d",Zcnt);

    printf(" \n\n =====================*******===================== ");

     printf(" \n Thanks!!!");






    getch();
    return 0 ;
}

