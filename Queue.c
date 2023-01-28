/*
   Linear Queue Implementation.
   Date:28-01-2023
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int i, data, Q[MAX], front = -1, rear = -1;

void enqueue(int);
void dequeue();
void traverse();

int main()
{
    while (1)
    {
        int choice;
        printf("\n\nChoose the action you want to perform.");
        printf("\n\n1.ENQUEUE\n2.DEQUEUE\n3.TRAVERSE\n4.EXIT");
        printf("\nEnter Choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the data you want to Enqueue:");
            scanf("%d", &data);
            enqueue(data);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            traverse();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\n!!!!!!!!!WRONG CHOICE!!!!!!!\nCHOOSE AGAIN\n");
        }
    }

    return 0;
}

void enqueue(int data)
{
    if (rear == MAX - 1)
    {
        printf("\nQueue is Full.\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
    }
    rear++;
    Q[rear] = data;
    printf("\n%d Inserted.\n", data);
}

void dequeue()
{
    if (front == -1 && rear == -1 || (rear < front))
    {
        front = rear = -1;
        printf("\nQueue is Empty.");
        return;
    }
    data = Q[front];
    printf("\n%d data is Dequeue.", data);
    front++;
}

void traverse()
{
    if (front == -1 && rear == -1 || (rear < front))
    {
        front = rear = -1;
        printf("\nQueue is Empty.");
        return;
    }
    printf("\nData in the Queue are:\n");
    for (i = front; i <=rear; i++)
    {
        printf("%d\t", Q[i]);
    }
}