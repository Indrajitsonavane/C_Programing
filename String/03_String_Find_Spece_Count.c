
/// Program To Find Space Count In string

#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0 , Scnt = 0 ;

        puts("\n Enter a string : ");
        gets(cSrc);

        for(; cSrc[i] != '\0' ; i++)
        {
            if( cSrc[i] == ' ' )
            {
                Scnt++;
            }
        }
            printf("\n Space count is : %d ",Scnt);

        getch();
        return 0;
}
