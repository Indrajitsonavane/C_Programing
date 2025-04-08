#include<stdio.h>
#include<conio.h>



int add(){


    int No1 = 0 , No2 = 0, res = 0 ;

    printf("\n Enter 1st No => ");
    scanf("%d",&No1);


    printf("\n Enter 2st No => ");
    scanf("%d",&No2);

   res = No1 + No2;

   return res;


}

int main()
{
    int  sum = 0;

     sum = add();

     printf("\n Sum is %d ",sum);

    getch();
    return 0 ;
}

/// accept Noting Return Something

