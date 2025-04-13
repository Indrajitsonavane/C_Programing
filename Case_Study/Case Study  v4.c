#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


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

int main()
{
    struct student *ptr = NULL;
    int cnt = 0 ;

    printf(" \n Enter student count => ");
    scanf("%d",&cnt);

    ptr = (struct student*) malloc (cnt * sizeof(struct student));

     Accept(ptr , cnt);
     Dislay(ptr , cnt);


getch();
return 0 ;

}

void Accept(struct student *sptr , int cnt)
{
    int i = 0 ;

    for(i = 0 ; i < cnt ; i++)
    {
            printf("\n\n ======================================= \n");

            printf("\n Enter a Roll Number => %d \n ",i + 1);
            sptr[i].Roll_No = i + 1;                                               ///scanf("%d",&sptr[i].Roll_No);

            printf("\n Enter a Name => ");
            scanf("%s",&sptr[i].Name);

            printf("\n Enter physics Marks => ");
            scanf("%d",&sptr[i].phy);

            printf("\n Enter a chamestry Marks => ");
            scanf("%d",&sptr[i].chem);

            printf("\n Enter a Mathamatics Marks=> ");
            scanf("%d",&sptr[i].math);

            printf("\n\n ======================================= \n");

            system("cls");

    }
}

void Dislay(struct student *std , int cnt)
{
    int i = 0 ;

        for(i = 0 ; i < cnt ; i++)
        {
             system("cls");

            printf("\n\n ======================================= \n");

            printf("\n Roll No      => %d ",std[i].Roll_No);
            printf("\n Name         => %s ",std[i].Name);
            printf("\n physics      => %d ",std[i].phy);
            printf("\n chemestry    => %d ",std[i].chem);
            printf("\n Mathamatics  => %d ",std[i].math);

            printf("\n\n ======================================= \n");

        getch();
        }

    return ;
}
