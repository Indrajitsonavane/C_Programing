#include<stdio.h>
#include<conio.h>
#include<dos.h>


int main ()
{
    int r=0 ,c=0 ,cnt=0;

    printf("\n Enter column & raw count =>");
    scanf("%d",&cnt);



    for ( r = 1; r <= cnt ; r++ )
        {   printf("\n\t");

            for (c = 1; c <= cnt ;  c++)
            {

               if ( r==1||r==cnt || c==cnt-2)
               {
                    printf(" * ");
               }
               else
               {
                   printf("   ");
               }


            }

            printf("\n\n");
        }

    getch();
    return 0;
}
