//////////////////////////////////////////////
///          TO PRINT HOLLOW SQUER        ///
/////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0 ,c = 0 , rc = 0 ;

        printf(" \n Enter size to print pattern =>");
        scanf("%d",&rc);

        printf("\n\n Pattern Is =>\n\n");

    for ( r = 1 ; r <= rc ; r++)
    {

        for ( c = 1;c <= rc ; c++)
            {

                if (  r == 1 || c == 1 || r == rc || c == rc)
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
