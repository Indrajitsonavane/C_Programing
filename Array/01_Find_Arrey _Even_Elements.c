#include<stdio.h>
#include<conio.h>

#define size 5
int main()
{
    int i = 0 , Ecnt = 0 ;
    int Num[size] = {};

    for(i = 0 ; i < size ; i++)
    {
       printf(" \n Enter %d number =>",i+1);
       scanf("%d",&Num[i]);

    }

    printf(" \n\n =====================*******===================== \n Even Array is => ");

    for(i = 0 ; i < size ; i++)
    {
            if(Num[i] % 2 == 0)
            {
                Ecnt++;
                printf(" \t %d ",Num[i]);
            }

    }



    printf(" \n\n Array even digits is   => %d",Ecnt);

    printf(" \n\n =====================*******===================== ");

     printf(" \n Thanks!!!");






    getch();
    return 0 ;
}
