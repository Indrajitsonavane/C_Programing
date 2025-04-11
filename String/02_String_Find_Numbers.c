
/// Program To Find  Digit Count In Given String

#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0 , dig = 0 ;

        puts("\n Enter a string : ");
        gets(cSrc);

        for(; cSrc[i] != '\0' ; i++)
        {
            if( cSrc[i] >= '1' && cSrc[i] <= '9'  )
            {
                dig++;
            }
        }
            printf("\n Digit count is : %d ",dig);

        getch();
        return 0;
}
