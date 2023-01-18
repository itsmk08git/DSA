/*
    Stack Implementation using Array(Static Implementation).
    Date:18-01-2023
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int TOP = -1, Q[SIZE];

void push(int data);
void pop();
void traverse();

int main()
{
    while (1)
    {
        int choice, data;
        printf("\n\nChoose the action you want to perform.");
        printf("\n1.PUSH\n2.POP\n3.TRAVERSE\n4.EXIT\n");
        printf("Enter Your Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the Data you want to insert:");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            traverse();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\n!!!!INVALID CHOICE!!!!\nCHOOSE AGAIN\n");
        }
    }
    return 0;
}

void push(int data)
{
    if (TOP == SIZE - 1)
    {
        printf("\nStack Overflow.\n");
        return;
    }
    TOP++;
    Q[TOP] = data;
}

void pop()
{
    int data;
    if (TOP == -1)
    {
        printf("\nStack Underflow.\n");
        return;
    }
    else
    {
        data = Q[TOP];
        TOP = TOP - 1;
        printf("\nThe Removed Data From Stack is %d\n", data);
    }
}

void traverse()
{
    int i;
    if (TOP == -1)
    {
        printf("\nStack Underflow.\n");
        return;
    }
    printf("\nThe data in stack are:\n");
    for (i = TOP; i >= 0; i--)
    {
        printf("%d\t", Q[i]);
    }
}