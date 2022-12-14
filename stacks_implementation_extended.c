#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100
int top = -1;
int stack[N];
void push();
int pop();
int peek();
bool isEmpty();
bool isFull();
int main()
{

    int choice;

    while (1)
    {
        printf("\n\nChoose any of the following options:\n\n");
        printf(" 0 to Exit;\t1 to Push;\t2 to Pop;\t3 to Peek\t4 to Check if the stack is empty;\t5 to Check if the stack is full\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
        case 5:
            isFull();
            break;
        default:
            printf("Please choose a correct option!");
        }
    }
    return 0;
}
void push()
{
    if (top == N - 1)
        printf("Overflow State\n");
    else
    {
        int x;
        printf("Enter element to be pushed into the stack: ");
        scanf("%d", &x);
        top += 1;
        stack[top] = x;
    }
}
int pop()
{
    if (top == -1)
        printf("Underflow State\n");
    else
    {
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top -= 1;
        return x;
    }
    return -1;
}
int peek()
{
    int x = stack[top];
    printf("%d is the top most element of the stack\n", x);
    return x;
}
bool isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}
bool isFull()
{
    if (top == N - 1)
    {
        printf("Stack is full: Overflow State\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;
}