/////////////////////////////////////////////////////////////
///               print table using for loop             ///
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int  No = 0 , Res = 0 ,cnt = 0;

        printf("\nEnter a number to print it's table =");
        scanf("%d",&No);

        for(cnt = 1 ; No >= 10; cnt++)
        {
            Res = No * cnt;

            printf("\n %d * %d = \n",No,cnt,Res);
        }



getch();
return 0;
}
