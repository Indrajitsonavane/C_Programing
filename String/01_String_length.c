
/// String length

#include<stdio.h>
#include<conio.h>

char strlen();

int main()
{
    char ch[20] = "";
    int i = 0 ;

    printf("\n Enter length => ");
    gets(ch);

    i = strlen(ch);


    printf(" \n String length => %d  ",i);

    return 0;

}

char strlen(char ch[])
{
    int i = 0 ;

    for(i = 0 ; ch[i] != '\0' ; i++);

 return i ;
}
