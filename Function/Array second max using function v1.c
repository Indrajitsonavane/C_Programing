
///Array Max Num Using Function

#include<stdio.h>
#include<conio.h>
#define cnt 5


int Find_Max();
void Accept();
int Second_Max();

int main()
{
    int Num[5]={} , Max = 0 , Smax = 0;

    Accept(&Num,cnt);
    Max = Find_Max(&Num,cnt);
    Smax = Second_Max(&Num);

    printf("\n Max Num is           => %d \n",Max);
    printf("\n Second Max Num is    => %d ",Smax);

    getch();
    return 0 ;

}

void Accept(int *Aptr )
{
    int i = 0 ,flag = 0 ;

     for(i = 0 ; i < cnt ; i++)
     {
         printf("\n Enter A Number %d => ",i+1);
         scanf("%d",&Aptr[i]);
     }
    return ;
}

int Find_Max(int *Aptr)
{
    int i = 0 , Max = 0  ;

    for(i= 0 ; i < cnt ; i++)
    {
        if(i == 0 || Max < Aptr[i])
        {
          Max = Aptr[i] ;
        }
    }
    return Max;

    Second_Max(Max);
}

int Second_Max(int *Aptr , int Max )
{
    int Smax = 0 , i = 0;


    for(i= 0 ; i < cnt ; i++)
    {
        if(i == 0 || Max > Aptr[i])
        {
          Smax = Aptr[i] ;
        }
    }
    return Smax ;
}


