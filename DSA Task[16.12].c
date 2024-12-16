// Implement a stack using arrays and perform push,pop and peek operations in C.
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Stack
{
    int arr[MAX];
    int top;
};

void initStack(struct Stack *stack)
{
    stack->top = -1;
}

int isFull(struct Stack *stack)
{
    return stack->top == MAX - 1;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

void push(struct Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack overflow! Cannot push %d\n", value);
    }
    else
    {
        stack->arr[++stack->top] = value;
        printf("Pushed %d to stack\n", value);
    }
}

int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack underflow! Cannot pop\n");
        return -1;
    }
    else
    {
        int poppedValue = stack->arr[stack->top--];
        printf("Popped %d from stack\n", poppedValue);
        return poppedValue;
    }
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty! Cannot peek\n");
        return -1;
    }
    else
    {
        return stack->arr[stack->top];
    }
}

void display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack contents: ");
        for (int i = 0; i <= stack->top; i++)
        {
            printf("%d ", stack->arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct Stack stack;
    initStack(&stack);

    push(&stack, 50);
    push(&stack, 60);
    push(&stack, 70);

    display(&stack);

    printf("Top element is: %d\n", peek(&stack));

    pop(&stack);
    display(&stack);

    printf("Top element after pop is: %d\n", peek(&stack));

    return 0;
}

// Write a C program to implement a singly linked list and perform insertion,deletion and traversal operations.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (newNode == NULL)
    {
        return;
    }
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning\n", value);
}

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (newNode == NULL)
    {
        return;
    }

    if (*head == NULL)
    {
        *head = newNode;
        printf("Inserted %d at the end\n", value);
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at the end\n", value);
}

void deleteNode(struct Node **head, int value)
{
    if (*head == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        printf("Deleted %d from the list\n", value);
        return;
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value %d not found in the list\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted %d from the list\n", value);
}

void traverseList(struct Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("List contents: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 60);
    insertAtEnd(&head, 70);
    insertAtEnd(&head, 80);

    traverseList(head);

    deleteNode(&head, 60);
    deleteNode(&head, 90);

    traverseList(head);

    return 0;
}
