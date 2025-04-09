
/// Multi Pointer

#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 21 ;

        int *ptr = (&No);
        int **p = &ptr ;

        printf("\n Value of No         => %d",No);
        printf("\n Value of No         => %d",&No);
        printf("\n Value of No         => %d",*ptr);
        printf("\n Value of No         => %d",ptr);
        printf("\n Address ptr to ptr  => %d",**p);
        printf("\n Address ptr to ptr  => %d",p);

    getch();
    return 0 ;
}
