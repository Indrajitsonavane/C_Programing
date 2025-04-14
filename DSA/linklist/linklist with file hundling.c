
#include"Heder_file.h"

#include"Login.h"
//#include"Deta.h"

int main()
{
    int ret = 0;

    time_t rawtime;
    struct tm* timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80,"\n\t Time is %I:%M%p.",timeinfo);



        login();

        printf("\n  ----------------------------------------------------------------\n");

        printf("\t\t\t\t\t\t\t\t\t\t\t\xB2 Shri Ganeshay nam \xB2");

        printf("\n  ----------------------------------------------------------------\n");

        printf("%s Welcome:%s \n",buffer ,Unm_ptr);




    /// functions to call





    getch();
    return 0 ;

}
