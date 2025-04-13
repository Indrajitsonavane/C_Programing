#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 2

void Accept();
void Dislay();


struct student
{
    int Roll_No;
    char Name[20];
    int phy;
    int chem;
    int math;
};

     struct student std[size];

int main()
{

     Accept();
     Dislay();




getch();
return 0 ;

}

void Accept()
{
    int i = 0 ;


    for(i = 0 ; i < size ; i++)
    {
            printf("\n\n ======================================= \n");

            printf("\n Enter a Roll Number => ");
            scanf("%d",&std[i].Roll_No);

            printf("\n Enter a Name => ");
            scanf("%s",&std[i].Name);

            printf("\n Enter physics Marks => ");
            scanf("%d",&std[i].phy);

            printf("\n Enter a chamestry Marks => ");
            scanf("%d",&std[i].chem);

            printf("\n Enter a Mathamatics Marks=> ");
            scanf("%d",&std[i].math);

            printf("\n\n ======================================= \n");

    }
}

void Dislay()
{
    int i = 0 ;

        for(i = 0 ; i < size ; i++)
        {
            printf("\n\n ======================================= \n");

            printf("\n Roll No      => %d ",std[i].Roll_No);
            printf("\n Name         => %s ",std[i].Name);
            printf("\n physics      => %d ",std[i].phy);
            printf("\n chemestry    => %d ",std[i].chem);
            printf("\n Mathamatics  => %d ",std[i].math);

            printf("\n\n ======================================= \n");
        }

}
