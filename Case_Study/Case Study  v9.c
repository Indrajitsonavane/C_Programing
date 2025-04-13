#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
    int Roll_No;
    char Name[20];
    int phy;
    int chem;
    int math;
    float Total;
    float per ;
};

void Accept(struct student * , int);
void Dislay(struct student * , int);
void Search(struct student * , int);
void Update(struct student * , int);
void Delete(struct student * , int);
void Toper(struct student * , int);
void Lowest(struct student * , int);
char string_val();

int main()
{
    struct student *ptr = NULL;
    int cnt = 0 ;
    char ch = '\0';
    int Choice = 0, i = 0, flag = 0;

    printf("\n\n\t\t ************** Welcome To Student Manegment System ************** \n");

    printf("\n\n\t\t Enter student count => ");
    scanf("%d",&cnt);

    ptr = (struct student*) malloc (cnt * sizeof(struct student));

    for(;;)
    {
        system("cls");

        printf("\n\n ************** Welcome To Menu ************** \n");

        printf(" \n\t\t 1)  To Add Student Information     ");
        printf(" \n\t\t 2)  To Display Student Information ");
        printf(" \n\t\t 3)  To Search Student Information  ");
        printf(" \n\t\t 4)  To Update Student Information  ");
        printf(" \n\t\t 5)  To Delete Student Information  ");
        printf(" \n\t\t 6)  To find Toper / Lower In Student Information");
        printf(" \n\t\t 7)  To Print  Student Information  ");
        printf(" \n\t\t 8)  To Exit                        ");

        printf("\n\n Choice : ");
        scanf("%d",&Choice);

        switch(Choice)
        {
                case 1 :
                    dwn:
                    Accept(ptr , cnt);
                    flag = 1;

                    break;

                case 2 :
                    if(flag == 1)
                    {
                       Dislay(ptr , cnt);
                    }
                    else
                    {
                        printf("\n No Data Added Yet, Add it 1st");
                    }
                    getch();

                    break;

                case 3 :
                    if(flag == 1)
                    {
                       Search(ptr , cnt);
                    }
                    else
                    {
                        printf("\n No Data Added Yet, Add it 1st");
                    }
                    getch();

                        break;

                case 4 :

                    if(flag == 1)
                    {
                       Update(ptr , cnt);
                    }
                    else
                    {
                        printf("\n No Data Added Yet, Add it 1st");
                    }
                    getch();

                        break;

                case 5 :

                    if(flag == 1)
                    {
                         Delete(ptr , cnt);
                    }
                    else
                    {
                        printf("\n No Data Added Yet, Add it 1st");
                    }

                        getch();

                        break;

                case 6 :
                        printf("\n Enter 1 To find Maximum Marks : ");
                        printf("\n Enter 2 To find Minimum Marks : ");

                        printf("\n\n Choice : ");
                        scanf("%d",&i);

                        if( i == 1)
                        {
                             Topper(ptr , cnt);
                        }
                        else if( i == 2)
                        {
                              Lowest(ptr , cnt);
                        }
                        else
                        {
                           printf("\n Invalid Choice");
                        }
                        getch();

                        break;

                case 7 :

                    system("lpr -P [printer name] [file name]");

                        break;

                case 8 :
                    fflush(stdin);
                    printf("\n Are You Sure (Yes/No) : ");
                    ch = getchar();

                    if(ch == 'Y' || ch == 'y')
                    {
                        goto Dwn;
                    }
                    fflush(stdin);
                    break;

                default :
                        printf("\n Invalid Choice");
                        getch();

        }
    }

    Dwn:
        printf("\n Thanks ");


getch();
return 0 ;

}

void Accept(struct student *sptr , int cnt)
{
    int i = 0 , res = 0;

    for(i = 0 ; i < cnt ; i++)
    {
            printf("\n\n ======================================= \n");

            printf("\n  Roll Number is => %d \n ",i + 1);
            sptr[i].Roll_No = i + 1;                                               ///scanf("%d",&sptr[i].Roll_No);

            fflush(stdin);

            up:

            printf("\n Enter A Name => ");
            scanf("%s",&sptr[i].Name);

            res =  string_val(sptr[i].Name);

             if(res == 2)
             {
                    goto up;
             }

            fflush(stdin);

            upa:
            printf("\n Enter physics Marks => ");
            scanf("%d",&sptr[i].phy);

            if(sptr[i].phy > 100)
            {
                 goto upa;
            }

            upb:
            printf("\n Enter A chemistry Marks => ");
            scanf("%d",&sptr[i].chem);

             if(sptr[i].phy > 100)
            {
                 goto upb;
            }

            upc:
            printf("\n Enter A mathamatics Marks=> ");
            scanf("%d",&sptr[i].math);

             if(sptr[i].phy > 100)
            {
                 goto upc;
            }

            sptr[i].Total = sptr[i].phy  + sptr[i].math + sptr[i].chem ;

            sptr[i].per = (sptr[i].Total / 300) * 100 ;

            printf("\n ======================================= \n");

            getch();

            system("cls");

    }
}

void Dislay(struct student *std , int cnt)
{
    int i = 0 ;

            printf("\n\n ==========================================================================================================\n\n");

            printf(" Roll No      Name \t  Physics \t  chemistry \t  mathamatics \t    Total   \t  Percentage  ");

            printf("\n\n ==========================================================================================================\n");

        for(i = 0 ; i < cnt ; i++)
        {
            if(std[i].phy != 0)
            {
            printf("\n   %d ",std[i].Roll_No);
            printf("\t      %s ",std[i].Name);
            printf("\t      %d ",std[i].phy);
            printf("\t      %d ",std[i].chem);
            printf("\t      %d ",std[i].math);
            printf("\t   %0.2f ",std[i].Total);
            printf("\t   %0.2f \n ",std[i].per);

            }
            else
             {
                printf("\n %d Roll Noumber Information Not Found  ",std[i].Roll_No);

             }

        }
             printf("\n\n ==========================================================================================================\n");

    getch();
    return ;
}

Search( struct student *std , int cnt)
{
      int i = 0 , src = 0;

    printf("\n Enter Roll NO to Search Student =>");
    scanf("%d",&src);

        for(i = 0 ; i < cnt ; i++)
        {
            if( src == std[i].Roll_No)
            {

                printf("\n\n ======================================= \n");

                printf("\n Roll No      : %d ",std[i].Roll_No);
                printf("\n Name         : %s ",std[i].Name);
                printf("\n physics      : %d ",std[i].phy);
                printf("\n chemistry    : %d ",std[i].chem);
                printf("\n mathamatics  : %d ",std[i].math);
                printf("\n Total        : %0.2f ",std[i].Total);
                printf("\n Percentage   : %0.2f ",std[i].per);

                printf("\n\n ======================================= \n");

            }


        }

    return ;
}

void Update( struct student *sptr , int cnt)
{
     int i = 0, src = 0 , temp = 0;
     char ch = '\0';

    printf("\n Enter Roll Number to Update Student Information =>");
    scanf("%d",&src);

    up:

    for(i = 0 ; i < cnt ; i++)
    {
        i - 1 ;
         if( src == sptr[i].Roll_No)
         {
                printf("\n 1) Name        ");
                printf("\n 2) physics     ");
                printf("\n 3) chemistry   ");
                printf("\n 4) mathamatics \n ");
                printf("\n choics :");
                scanf("%d",&temp);

                switch(temp)
                {
                    case 1:

                        printf("\n Enter a Name : ");
                        scanf("%s",&sptr[i].Name);
                        break;

                    case 2:

                         printf("\n Enter physics Marks : ");
                         scanf("%d",&sptr[i].phy);

                         break;


                    case 3:

                         printf("\n Enter a chamestry Marks : ");
                         scanf("%d",&sptr[i].chem);
                        break;

                    case 4:

                        printf("\n Enter a Mathamatics Marks : ");
                        scanf("%d",&sptr[i].math);
                        break;

                    default:

                        printf(" \n Invalid choice!!!! ");
                        goto up;

                        break;
                }
        }
    }

return ;
}

void Delete(struct student *std , int cnt)
{
    int i = 0 , src = 0;

    printf("\n Enter Roll Number To Delete Information Student =>");
    scanf("%d",&src);

        for(i = 0 ; i < cnt ; i++)
        {
            if( src == std[i].Roll_No)
            {
                strcpy(std[i].Name, "");

                std[i].phy =  0 ;

                std[i].chem = 0 ;

                std[i].math = 0 ;

                std[i].Total = 0 ;

                std[i].per  = 0.0 ;
            }

        }


    return ;
}

void Topper(struct student *sptr , int cnt)
{
         int i = 0 ;
         float Max = 0.0 ;

        for(i = 0 ; i < cnt ; i++)
        {
                  if(i == 0 || Max < sptr[i].per)
                    {
                      Max = sptr[i].per;
                    }

        }

    printf("\n Maximum Percentage Student => %f ",Max);

    getch();
    return ;

}

void Lowest(struct student *sptr , int cnt)
{
         int i = 0 ;
         float min = 0.0 ;

        for(i = 0 ; i < cnt ; i++)
        {
              if(i == 0 || min < sptr[i].per)
                {
                  min = sptr[i].per;
                }

        }

    printf("\n Minimum Percentage Student => %f \n  ",min);

    getch();
    return ;

}

char string_val(char *cSrc , int st  )
{
    int i = 0 , dig = 0;

            for(i = 0; cSrc[i] != '\0' ; i++)
            {
                if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' || cSrc[i] >= 'a' && cSrc[i] <= 'z' )
                {
                   dig = 1;
                }
                else
                {
                   dig = 2;
                }
            }

           if(dig == 1)
            {
                return dig ;
            }
            else
            {
                puts("\n Entered  String  Not Vaid  ");
                return dig ;
            }

}
