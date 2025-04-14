#include<stdio.h>
#include<conio.h>

#define size 7

void push();
int S_full();
int S_Empty();
void pop();
void display();
void search();


int stack[size];
int top = 0 ;


int main()
{

push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
push(70);
display();
pop();

display();

return 0;

}

void push(int no)
{
    if( S_full() )
    {
        printf("\n The stack is already full ");
    }
    else
    {
        stack[top] = no ;
        top++;
    }

}

int S_full()
{
    if(stack[top] > size)
    {
        return 1;
    }
  return 0 ;
}

int S_Empty()
{
    if(top == 0 )
    {
        return 1 ;
    }
    return 0 ;
}

void pop()
{
    if(S_Empty())
    {
         printf("\n The stack is already Empty ");
    }
    else
    {
        printf("\n In the stack poped index is %d and element %d ",top , stack[top -1]);
        stack[top] = 0 ;
        top--;
    }

}

void display()
{
    int i = 0 ;

    if(S_Empty())
    {
        printf("\n The stack is is empty");
    }
    else
    {
            printf("\n Stack element is ");
            for(i = 0 ; i < top ;i++ )
            {
                printf("\n/t/t %d => %d ",i + 1 ,stack[i]);
            }

    }
    return 0 ;
}

void search()
{
    int i = 0 , src_ele = 0;

    printf("Enter a element to search = ");
    scanf("%d",&src_ele);

    if(S_Empty())
    {
        printf("\n The stack is is empty");
    }
    else
    {
            printf("\n Stack element is ");
            for(i = 0 ; i < top ;i++ )
            {
                if()
                {
                    printf("\n/t/t %d => %d ",i + 1 ,stack[i]);
                }
            }

    }

}
