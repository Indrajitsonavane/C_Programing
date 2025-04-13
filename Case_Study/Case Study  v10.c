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
void Save_pdf();
char string_val();

 FILE *fp;

int main()
{
    struct student *ptr = NULL;
    int cnt = 0 ;
    char ch = '\0';
    int Choice = 0, i = 0, flag = 0;

    system("color F0");

    printf("\n\n\t\t ************** Welcome To Student Manegment System ************** \n");

    printf("\n\n\t\t Enter Student Count Du You Have : ");
    scanf("%d",&cnt);

    ptr = (struct student*) malloc (cnt * sizeof(struct student));

    for(;;)
    {
        system("cls");

        printf("\n\n\t\t\t ************** Welcome To Menu ************** \n");

        printf(" \n\t\t\t\t 1)  To Add Student Information     ");
        printf(" \n\t\t\t\t 2)  To Display Student Information ");
        printf(" \n\t\t\t\t 3)  To Search Student Information  ");
        printf(" \n\t\t\t\t 4)  To Update Student Information  ");
        printf(" \n\t\t\t\t 5)  To Delete Student Information  ");
        printf(" \n\t\t\t\t 6)  To find Toper / Lower In Student Information");
        printf(" \n\t\t\t\t 7)  To Save Student Information As pdf");
        printf(" \n\t\t\t\t 8)  To Exit                        ");

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

                      if(flag == 1)
                    {
                        Save_pdf(ptr);
                    }
                    else
                    {
                        printf("\n No Data Added Yet, Add it 1st");
                    }

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

        free(ptr);


getch();
return 0 ;

}

void Accept(struct student *sptr , int cnt)
{
    int i = 0 , res = 0;

    system("cls");

    for(i = 0 ; i < cnt ; i++)
    {
            printf("\n\n ======================================= \n");

            printf("\n  Roll Number is => %d \n ",i + 1);
            sptr[i].Roll_No = i + 1;                                               ///scanf("%d",&sptr[i].Roll_No);

            fflush(stdin);

            up:

            printf("\n Enter Student Name => ");
            gets(sptr[i].Name);                                                                    ///scanf("%s",&sptr[i].Name);

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
                 printf(" \n Entered  Marks Is Not Valid ");
                 goto upa;
            }

            upb:
            printf("\n Enter A chemistry Marks => ");
            scanf("%d",&sptr[i].chem);

             if(sptr[i].phy > 100)
            {
                 printf(" \n Entered  Marks Is Not Valid ");
                 goto upb;
            }

            upc:
            printf("\n Enter A mathamatics Marks=> ");
            scanf("%d",&sptr[i].math);

             if(sptr[i].phy > 100)
            {
                 printf(" \n Entered  Marks Is Not Valid ");
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
                printf("\n\n ==========================================================================================================\n\n");

                printf(" Roll No      Name \t  Physics \t  chemistry \t  mathamatics \t    Total   \t  Percentage  ");

                printf("\n\n ==========================================================================================================\n");

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

                        printf("\n Old  a Name : %s ",sptr[i].Name);
                        printf("\n Enter a Name : ");
                        scanf("%s",&sptr[i].Name);
                        printf("\n You Entered Information Is Successfully Updated ");
                        break;

                    case 2:

                         printf("\n Old physics Marks : %d ",sptr[i].phy);
                         printf("\n Enter physics Marks : ");
                         scanf("%d",&sptr[i].phy);
                         printf("\n You Entered Information Is Successfully Updated ");
                         break;


                    case 3:

                         printf("\n Old A chamestry Marks : %d ",sptr[i].chem);
                         printf("\n Enter A chamestry Marks : ");
                         scanf("%d",&sptr[i].chem);
                         printf("\n You Entered Information Is Successfully Updated ");
                        break;

                    case 4:
                        printf("\n Old a Mathamatics Marks : %d ",sptr[i].math);
                        printf("\n Enter a Mathamatics Marks : ");
                        scanf("%d",&sptr[i].math);
                        printf("\n You Entered Information Is Successfully Updated ");
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
                puts("\n Entered  Name Is Not Valid ");
                return dig ;
            }

}

void Save_pdf(struct student std , int cnt)
{

    printf("Work in process ");

    //int i = 0 ;

    //fflush(stdin);

    //fp = fopen( "D:\\file.txt" , "a" );

    //  fwrite(&std, 1 , sizeof(std) , fp );

    //    fclose(fp);


    getch();
   return ;
}
