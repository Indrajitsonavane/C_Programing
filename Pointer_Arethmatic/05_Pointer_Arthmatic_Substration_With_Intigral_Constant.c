#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {2,3,4,5,6},sum = 0 ;

     int *ptr = &Num[4];

     printf(" \n\n base Adderess of ptr => %d",ptr);
     printf(" \n\n base Value of ptr    => %d \n ",*ptr);

    ptr = ptr - 2 ;

        getch();
        printf("\n  After Conversion");

     printf(" \n\n base Adderess of ptr => %d",ptr);
     printf(" \n\n base value  of ptr   => %d",*ptr);

    getch();
    return 0 ;
}
