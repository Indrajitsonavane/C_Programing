/////////////////////////////////////////////////
///          TO PRINT PRIME NUMCBER          ///
////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
        int No=0, i=0;

        printf(" Enter a number to find it is prime or not = ",No);
        scanf("%d",&No);

        for (i = 2; i < No; i++)
        {
                if(No % i == 0)
            {
                break;
            }

        }

        if (No == i)
        {
            printf("\n\t This number is prime !!!");
        }
        else
        {
            printf("\n\t Given No Is Not Prime !!!");
        }

    getch();
    return 0;
}
