#include <stdio.h>
#include<iostream>
#include <ncurses.h>

using namespace std;

int MAXSTACK;
typedef int itemtype;

typedef struct
{
    itemtype item[300];
    int count;
} stack;

int empty(stack *s)
{
    return (s->count == 0);
}

int full(stack *s)
{
    return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s)
{
    if (full(s))
        printf("stack is full !\n");
    else
    {
        s->item[s->count] = x;
        ++(s->count);
    }
}

void initializestack(stack *s)
{
    s->count = 0;
}

int pop(stack *s)
{
    if (empty(s))
        printf("stack is empty\n");
    else
    {
        --(s->count);
        return (s->item[s->count]);
    }
}

int main()
{
    int i, n, m, l, z;
    int input;
    stack Stack;

    printf("Converstion decimal to biner\n\n");
    initializestack(&Stack);
    printf("Enter decimal number = ");
    cin >> input;

    for (z = 1, n = input; n > 0; n = n / 2, z++)
    {
        MAXSTACK = z;
    }
    m = 0;
    for (n = input; n > 0; n = n / 2)
    {
        l = n % 2;
        push(l, &Stack);
        ++m;
    }

    printf("Enter binary number = ");
    for (i = MAXSTACK; i > 0; i--)
    {
        printf("%d", pop(&Stack));
    }

    getch();
    return 0;
}