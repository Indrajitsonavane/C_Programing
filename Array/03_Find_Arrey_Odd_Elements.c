#include<stdio.h>
#include<conio.h>

#define size 5
int main()
{
    int i = 0 , Ocnt = 0 ;
    int Num[size] = {};

    for(i = 0 ; i < size ; i++)
    {
       printf(" \n Enter %d number =>",i+1);
       scanf("%d",&Num[i]);

    }

    printf(" \n\n =====================*******===================== \n Odd Array is => ");

    for(i = 0 ; i < size ; i++)
    {
            if(Num[i] % 2 == 1)
            {
                Ocnt++;
                printf(" \t %d ",Num[i]);
            }

    }



    printf(" \n\n Array Odd digits is   => %d",Ocnt);

    printf(" \n\n =====================*******===================== ");

     printf(" \n Thanks!!!");






    getch();
    return 0 ;
}
