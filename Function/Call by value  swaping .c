#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 0 , y = 0  ;

        printf("\n Enter 1st Noumber =>");
        scanf("%d",&x);

        printf("\n Enter 2nd Noumber =>");
        scanf("%d",&y);

        swap(x , y);

}
int swap(int N1 ,int N2)
{


        N1 = N1 + N2 ;
        N2 = N1 - N2 ;
        N1 = N1 - N2 ;

        printf("\n 1st Noumber => %d ",N1);
        printf("\n 2nd Noumber => %d ",N2);
}
