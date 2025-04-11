
///  String Reverse In Place

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void strrev();

int main()
{
    char ch[20] = {'\0'} ;

    printf("\n Enter A String =>");
    gets(ch);

    strrev(ch);

    printf(" string is => %s ",ch);

    getch();
    return 0;

}


void strrev(char ch[])
{
     char temp = '\0' ;
    int i =  0 , j = 0 ;

    while(ch[i] != '\0')
    {
       i++;
    }
    i--;

    while(ch[j] != '\0')
    {
      if(j >= i)
      {
          temp = ch[j];
          ch[j] = ch[i];
          ch[i] = temp;
      }
      j++;
      i--;
    }

}
