#include<stdio.h>
#include<conio.h>

int main()
{
    int sum = 0 ,i = 0, cnt = 0 ;
    int *Mptr = NULL;

    printf("\n Enter How many Customers => ");
    scanf("%d",&cnt);

    Mptr = (int*)calloc (cnt , sizeof(int));


    for(i = 0 ; i < cnt ; i++)
    {
        printf("\n Enter A Num %d => ", i + 1);
        scanf("%d",&Mptr[i]);
    }

    for(i=0 ; i < cnt ; i++)
    {
          sum = sum + Mptr[i];
    }

    free(Mptr);
    printf("\n Sum is => %d",sum);

    getch();
    return 0;
}
