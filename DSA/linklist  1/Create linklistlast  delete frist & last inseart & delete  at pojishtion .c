#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void inseart_frist();
void inseart_last();
void Delete_frist();
void Delete_last();
void inseart_at_position();
void Delete_at_position();
void Display_LL();
void search_LL();

int LL_ele_cnt = 0 ;

