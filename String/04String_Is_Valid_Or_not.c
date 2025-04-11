
/// Find String Is Valid Or Not

#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0 , dig = 0 ;

        puts("\n Enter a string : ");
        gets(cSrc);

        for(i = 0; cSrc[i] != '\0' ; i++)
        {
            if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' || cSrc[i] >= 'a' && cSrc[i] <= 'z' )
            {
                dig = 1;
            }
            else
            {
                dig = 2;
            }

        }

        if(dig == 1)
        {
            puts("\n Entered  string Perfect  ");
        }
        else
        {
            puts("\n Entered  string  Not Perfect  ");
        }

        getch();
        return 0;
}
