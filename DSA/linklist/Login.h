#include"Heder_file.h"

char u_read();
char *Unm_ptr = NULL;


FILE *fp;

HWND WINAPI GetConsoleWindowNT(void)
{
    //declare function pointer type
    typedef HWND WINAPI(*GetConsoleWindowT)(void);
    //declare one such function pointer
    GetConsoleWindowT GetConsoleWindow;
    //get a handle on kernel32.dll
    HMODULE hk32Lib = GetModuleHandle(TEXT("KERNEL32.DLL"));
    //assign procedure address to function pointer
    GetConsoleWindow = (GetConsoleWindowT)GetProcAddress(hk32Lib
    ,TEXT("GetConsoleWindow"));
    //check if the function pointer is valid
    //since the function is undocumented
    if(GetConsoleWindow == NULL){
        return NULL;
    }
    //call the undocumented function
    return GetConsoleWindow();
}

void delay(float second)
{

int milsec = 1000 * second;

clock_t startTime = clock();

while(clock() < (startTime + milsec));

}

struct log
{
    char u_nm[10];
    char u_pass[10];
};

struct log u_login ;

void login()
{
     HWND hWnd=GetConsoleWindowNT();
    MoveWindow(hWnd,0,0,1500,900,TRUE);

    int choice = 0;

    printf("\n\n\n\n\n\t\t\t\t\\xB2 WELCOME \xB2 \n\n\t\t\t\t\t\t TO OUR PRODUCT MANEGEMENT SYSTEM ");
    delay(4);
    system("cls");

   printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t LOGIN \n\n");

   up:

    printf("\n\t\t\t\t\t\t\t\t\t\t\t 1) Login : \n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t 2) Signup : ");
    scanf("%d",&choice);
    system("cls");


    switch(choice)
    {
        case 1:
            u_read();

            break;

        case 2:

        if ((fp = fopen("program_Login.txt","a")) == NULL)
        {
            printf("Error! opening file");
            delay(2);
            exit(1);
        }

              printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t ENTER DETILS : \n");

              fflush(stdin);
              printf("\n\t\t\t\t\t\t\t\t\t USERNAME : ");
              gets(u_login.u_nm);

              fflush(stdin);
              printf("\n\t\t\t\t\t\t\t\t\t PASSWORD : ");
              gets(u_login.u_pass);

              if(fwrite(&u_login, sizeof(struct log), 1, fp))
              {
                  printf(" \n\t\t Login Details Saved Successful ");
                  system("cls");
                  goto up;

              }
              else
              {
                  printf(" \n\t\t Login Details Not Saved Successful ");
              }

            break;

        default:

                printf("\n Invalid Choice");
                goto up;
                 system("cls");

             break;
}

}
char u_read()
{
        char temp[10] = {};
        char temp1[10] = {};

    if((fp = fopen("program_Login.txt","r")) == NULL)
       {
           printf("\n\n\n\n\t\t\t\t\t\t Error! opening file No Login Detils found ");
           delay(3);
           system("cls");
           return 1 ;
       }

       a:

              printf("\n\t\t\t\t\t\t\t\t\t\t ENTER DETILS : \n");

              fflush(stdin);
              printf("\n\t\t\t\t\t\t\t\t\t USERNAME : ");
              gets(temp);

              fflush(stdin);
              printf("\n\t\t\t\t\t\t\t\t\t PASSWORD : ");
              gets(temp1);

     fread(&u_login, sizeof(struct log), 1, fp);

     if( !strcmp(u_login.u_nm , temp) && !strcmp(u_login.u_pass , temp1))
     {
         printf("\t\t\t\t\t\t\t Login Succcessfuly!!!! ");
         getch();
         system("cls");

     }
     else
     {
         goto a;
         system("cls");
     }

     Unm_ptr = &temp;

   fclose(fp);
   return *Unm_ptr ;

}

