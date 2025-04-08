#include<stdio.h>
#include<conio.h>

int Fact();

int main()
{
    int No= 0 , res = 0  ;

    printf(" \n Enter A no to calculate Factoreal => ");
    scanf("%d",&No);

     res = Fact(No);

     printf(" %d ",res);

}

int Fact(int no)
{
    int i = 0 , fact = 1 ;

    for(i = 1 ;  i <= no ; i++)
    {
         fact = fact * no ;
    }

    return fact;
}
