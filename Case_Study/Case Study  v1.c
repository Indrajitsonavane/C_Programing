#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct student
{
    int Roll_No;
    char Name[20];
    int phy;
    int chem;
    int math;
    int Total;
};

int main()
{
    struct student std1 = {11 , "Omkar" , 10 , 20 , 30 , 60};


            printf("\n\n ======================================= \n");

            printf("\n Roll No      => %d ",std1.Roll_No);
            printf("\n Name         => %s ",std1.Name);
            printf("\n physics      => %d ",std1.phy);
            printf("\n chemestry    => %d ",std1.chem);
            printf("\n Mathamatics  => %d ",std1.math);
            printf("\n Total        => %d ",std1.Total);

            printf("\n\n ======================================= \n");


getch();
return 0 ;

}
