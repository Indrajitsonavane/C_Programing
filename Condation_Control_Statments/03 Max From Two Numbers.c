//////////////////////////////////////
///  Max From Two Number          ///
/////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

        int No1=0 ,No2=0 ;

    up:

        printf("\n\t==============******==============\n");

        printf("\n\tEnter Nrist Number =>");
        scanf("%d",&No1);


        printf("\n\tEnter Second  Number =>");
        scanf("%d",&No2);

        printf("\n\t==============******==============\n");

        if (No1 == No2)
        {
            system ("cls");
            goto up;
        }
        else if (No1 > No2)

        {
            printf("\n\t***** %d This Number is greater *****",No1);

        }
        else

        {
            printf("\n\t***** %d This Number is greater *****",No2);
        }


                    printf("\n\n\n\t\t\t!!! THANKS !!!");



getch();
return 0 ;
}
