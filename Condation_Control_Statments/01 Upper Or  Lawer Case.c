//////////////////////////////////////////////
/// To find upper or lawer case carector  ///
/////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{

        char ch = '/0';

        printf("\n\t==============******==============\n");

        printf("\n Enter A Chartector =>");
        scanf("%c",&ch);

        if (ch >='A' && ch <= 'Z' )
        {
            printf("\n\t \'%c'\ This charector is uppercase\n ",ch);
            printf("\n\t==============******==============\n");

        }

        else if ( ch >= 'a' && ch <= 'z')
        {
            printf("\n\t \'%c'\ This charector is lawercase \n",ch );
            printf("\n\t==============******==============\n");
        }

        else if (ch >=0 && ch <= 9)
        {
            printf("\n\t %c This Is not valid input ");
        }

        else
        {
            printf("\n %c This Is not valid input ");
        }
    getch ();
    return 0;
}
