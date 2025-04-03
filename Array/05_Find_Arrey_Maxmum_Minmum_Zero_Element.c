#include<stdio.h>
#include<conio.h>

#define size 5
int main()
{
    int i = 0 , Zcnt = 0 , Max = 0 , Min = 0  ;
    int Num[size] = {};

    for(i = 0 ; i < size ; i++)
    {
       printf(" \n Enter %d number =>",i+1);
       scanf("%d",&Num[i]);

    }

    for(i = 0 ; i < size ; i++)
    {
           if(i == 0 || Num[i] < Min)
            {
                if(Num[i] == 0)
                {
                    Zcnt++;
                    continue;
                }

                Min = Num[i];

            }
            else if(Num[i] > Max)
            {
                Max = Num[i];
            }

    }

     printf(" \n\n =====================*******===================== ");
     printf(" \n\n Array Zero count is        => %d",Zcnt);
     printf(" \n\n Array Maxmum count is      => %d",Max);
     printf(" \n\n Array minimum count is     => %d",Min);
     printf(" \n\n =====================*******===================== ");

     printf(" \n\n Thanks!!!");

    getch();
    return 0 ;
}
