/*
  Topic: Array Implementation
  Date:17-01-2023
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int Q[SIZE], size, pos, data, del, i;

void push(int);
void position();
void traverse();
void delete();

//Main Function
int main()
{
    while (1)
    {
        int choice;
        printf("\n1.PUSH\n2.TRAVERSE\n3.POSITION\n4.DELETE\n5.EXIT\n");
        printf("\nEnter Your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the size of data to be inserted:");
            scanf("%d", &size);
            push(size);
            break;
        case 2:
            traverse();
            break;

        case 3:

            position(data, pos);
            break;
        case 4:
            delete ();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\nWORONG CHOICE\nChoose Again\n");
        }
    }
    return 0;
}

//Inserting Data in Array
void push(int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter Q[%d]=", i);
        scanf("%d", &Q[i]);
    }
}

//Traversing in Array
void traverse()
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", Q[i]);
    }
}

//Inserting Data in Array in Specified Position.
void position()
{
    if (size >= SIZE)
    {
        printf("\nArray is Full.\nNo Further Insertion is Possible.\n");
        return;
    }
    printf("\nThe current position is %d", size);
    printf("\nEnter the data & position you want to insert:");
    scanf("%d\t%d", &data, &pos);
    for (int i = size - 1; i >= pos - 1; i--)
    {
        Q[i + 1] = Q[i];
    }
    Q[pos - 1] = data;
    size++;
    return;
}

//Deleting Data From Specified Position
void delete()
{
    if (size == 0)
    {
        printf("\nNothing to Delete.\nArray is Empty.\n");
        return;
    }
    printf("\nEnter the Position of Data that you want to Delete:");
    scanf("%d", &del);
    if (del <= 0 || del > size)
    {
        printf("\nInvalid Position.\n");
        return;
    }
    for (i = del-1 ; i < size - 1; i++)
    {
        Q[i] = Q[i + 1];
    }
    size--;
}