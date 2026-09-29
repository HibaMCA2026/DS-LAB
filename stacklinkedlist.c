
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int isEmpty()
{
    return top == NULL;
}

void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Stack overflow! Cannot push %d.\n", value);
        return;
    }

    newNode->data = value;
    newNode->next = top; 
    top = newNode;      

    printf("%d pushed to stack.\n", value);
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack underflow! The stack is empty.\n");
        return;
    }

    struct Node *temp = top;

    printf("Popped element: %d\n", top->data);

    top = top->next;
    free(temp);
}






















