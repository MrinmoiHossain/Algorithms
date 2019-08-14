#include <stdio.h>
#define QUEUE_MAX 5

typedef struct{
    int data[QUEUE_MAX + 1];
    int top, back;
}Queue;

void push(Queue *q, int value) // also known as enqueue
{
    if((q->back + 1) % (QUEUE_MAX + 1) == q->top){
        printf("Queue is full\n");
    }
    q->data[q->back] = value;
    q->back = (q->back + 1) % (QUEUE_MAX + 1);
}

void pop(Queue *q)  // also called dequeue
{
    if(q->top == q->back)
        printf("Queue is empty\n");
    else{
        q->top = (q->top + 1) % (QUEUE_MAX + 1);
    }
}

int front(Queue *q)
{
    return q->data[q->top];
}

int isEmpty(Queue *q)   // if the queue is empty then return 1
{
    return (q->back == q->top? 1 : 0);
}

int main(void)
{
    Queue q;
    q.top = 0, q.back = 0;

    int i;
    for(i = 3; i < 8; i++)
        push(&q, i);

    printf("Empty Check: %d\n", isEmpty(&q));

    for(i = 0; i < q.back; i++){
        printf("Value: %d\n", front(&q));
        pop(&q);
    }

    return 0;
}
