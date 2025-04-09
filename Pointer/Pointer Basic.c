#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21 ;

       int *ptr = (&No);

    printf("\n Value of No   => %d",No);
    printf("\n Address of No => %d",&No);
    printf("\n Value of ptr  => %d",ptr);
    printf("\n Address of No is Assined to ptr => %d",&ptr);




    getch();
    return 0 ;
}
