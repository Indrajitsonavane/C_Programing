
/// Reverse String 1st Approach

#include<stdio.h>
#include<conio.h>

int main()
{
        char src1[50] ={'\0'} , src2[50] ={'\0'} , cdest = '\0';
        int i = 0 , j = 0 ;

        puts("\n Enter a string : ");
        gets(src1);

        for( i = 0 ; src1[i] != '\0' ; i++);
        i - 1 ;

        while( src2[i] == 0)
        {
          cdest =  src1[i] ;

           src2[i] = cdest;
          i--;
        }
            printf("\n Reverse string is : %s ",src2);

        getch();
        return 0;
}
