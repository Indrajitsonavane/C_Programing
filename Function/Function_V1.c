#include<stdio.h>
#include<conio.h>

void add(){


    int No1 = 0 , No2 = 0, sum = 0; ;

    printf("\n Enter 1st No => ");
    scanf("%d",&No1);


    printf("\n Enter 2st No => ");
    scanf("%d",&No2);

    sum = No1 + No2 ;

    printf("\n Sum is %d ",sum);
}

int main()
{
    add();

    getch();
    return 0 ;
}


