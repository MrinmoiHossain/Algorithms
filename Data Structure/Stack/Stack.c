#include <stdio.h>
#define STACK_MAX 100

typedef struct{
    int top;
    int data[STACK_MAX];
}Stack;

void push(Stack *s, int value)
{
    if(s->top < STACK_MAX){
        s->data[s->top] = value;
        s->top += 1;
    }
    else
        printf("Stack is full\n");
}

void pop(Stack *s)
{
    int popValue;
    if(s->top == 0){
        printf("Stack is empty\n");
    }
    else{
        popValue = s->data[s->top];
        s->top -= 1;
    }
}

int isEmpty(Stack *s)
{
    return ((s->top <= 0) ? 0 : 1);
}

int main(void)
{
    Stack s;
    s.top = 0;

    int i;
    for(i = 0; i < 7; i++){
        push(&s, i);
    }

    while(s.top > 0){
        pop(&s);
        printf("Value: %d\n", s.data[s.top]);
    }

    printf("Empty check: %d\n", isEmpty(&s));

    return 0;
}
