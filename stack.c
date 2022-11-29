#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 6
int top= -1;
int s[SIZE];

void push(int );
void pop();
void traverse();

int main()
{
    while(1)
    {
        int ch , d;
        printf("\n*****MENU*****\n");
        printf("1.PUSH\n2.POP\n3.TRAVERSE\n4.EXIT\n");
        printf("Choose between(1-4):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                    printf("Enter the value to be Inserted:");
                    scanf("%d",&d);
                    push(d);
                    break;
            case 2: pop();
                    break;
            case 3: traverse();
                    break;
            case 4: exit(0);
                    break;
            default: printf("******WORNG CHOICE******\nChoose Again");

        }
    }
    getch();
    return 0;
}

void push(int data)
{
    if(top== SIZE - 1)
    {
        printf("Stack is Full!!!! Insertion not possible.\n");
    }
    top++;
    s[top]=data;
    printf("\nInsertion successfull.\n");
}

void pop()
{
    if(top== -1)
    {
        printf("Stack is Empty!!! Deletion not possible.\n");
    }
    else
    {
        int data= s[top];
        printf("%d",data);
        printf("\nDeletion successfull!!!!\n");
        top--;
    }
}

void traverse()
{
    if(top==-1)
    {
        printf("Stack is Empty!!!!! Deletion not possible.\n");
    }
    for(int i=top; i>=0; i--)
    {
        printf("The data is %d\n",s[i]);
    }
}
