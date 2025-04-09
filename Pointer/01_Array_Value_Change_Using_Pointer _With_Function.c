///
#include<stdio.h>
#include<conio.h>

int Accept();
int i= 0;

struct fun
{
    int num;
};

int main()
{

    struct fun  obj ;

    struct fun *ptr = &obj;

   ptr =  Accept(ptr);

   printf("\n  No => %d",ptr);

    getch();
    return 0 ;
}

int Accept(struct fun *iptr  )
{
        printf("\n  No =>");
        scanf("%d",&iptr);

    return iptr;
}
