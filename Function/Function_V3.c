#include<stdio.h>
#include<conio.h>



int add(int x , int  y  ){

    printf("\n Enter 1st No => ");
    scanf("%d",&x);


    printf("\n Enter 2st No => ");
    scanf("%d",&y);

   return  (x + y) ;


}

int main()
{

    int No1 = 0 , No2 = 0, sum = 0 ;

    sum = add(No1  , No2);

     printf("\n Sum is %d ",sum);

    getch();
    return 0 ;
}




