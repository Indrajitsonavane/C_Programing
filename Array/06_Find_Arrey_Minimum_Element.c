#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5
int main()
{
    int i = 0 , min = 0;
    int Num[size] = {};


    system("color 17");

    for(i = 0 ; i < size ; i++)
    {
       printf(" \n Enter %d number =>",i+1);
       scanf("%d",&Num[i]);

    }

    for(i = 0 ; i < size ; i++)
    {
            if(i == 0 || Num[i] < min)
            {
                min = Num[i];
            }

    }

    printf(" \n\n =====================*******===================== ");
    printf(" \n\n Array minimum is       => %d",min);
    printf(" \n\n =====================*******===================== ");

    printf(" \n Thanks!!!");

    getch();
    return 0 ;
}
