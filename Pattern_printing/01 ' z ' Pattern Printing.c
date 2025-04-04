///////////////////////////////////////////////
///         TO PRINT " Z " PATTRAN         ///
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0 ,c = 0 , rc = 0 ;

        printf(" \n Enter size to  \' Z '\print pattern =>");
        scanf("%d",&rc);

    for ( r = 1 ; r <= rc ; r++)
    {
        printf("\n\t\n");
        for ( c = 1;c <= rc ; c++)
        {

                if (  r == 1 || r + c == rc + 1 || r == rc )
                {
                    printf(" * ");
                }

                         else
                            {
                            printf("   ");
                            }
    }

        printf("\n");

        }



    getch ();
    return 0 ;
}
