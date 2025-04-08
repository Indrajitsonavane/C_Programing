
///Array Max Num Using Function

#include<stdio.h>
#include<conio.h>

int Find_Max();
void Accept();



int main()
{
    int Num[5]={} , Max = 0 ;

    Accept(&Num,5);

    Max = Find_Max(&Num,5);

    printf("\n Max Num is %d",Max);
}
void Accept(int *Aptr , int cnt)
{
    int i = 0 ;
     for(i = 0 ; i < cnt ; i++)
     {
         printf("\n Enter A Number %d => ",i+1);
         scanf("%d",&Aptr[i]);
     }
    return ;
}

int Find_Max(int *Aptr , int cnt)
{
    int i = 0 , Max = 0;

    for(i= 0 ; i < cnt ; i++)
    {

        if(i == 0 || Max < Aptr[i])
        {
          Max = Aptr[i] ;
        }


    }
    return Max;
}


