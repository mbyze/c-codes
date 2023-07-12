#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *veri;
    int top;
} Stack;

typedef struct Queue {
    int *veri;
    int front;
    int rear;
} Queue;

void stbaslangic(Stack *stack) 
{
    stack->veri = NULL;
    stack->top = -1;
}

void push(Stack *stack, int deger) {
    stack->veri = (int *)realloc(stack->veri, (stack->top + 2) * sizeof(int));
    stack->veri[++stack->top] = deger;
}

int pop(Stack *stack) {
    if (stack->top == -1) {
        printf("stack bos.\n");
        return -1;
    }
    return stack->veri[stack->top--];
}


void quebaslangic(Queue *queue) {
    queue->veri = NULL;
    queue->front = -1;
    queue->rear = -1;
}

void enqueue(Queue *queue, int deger) 
{
    queue->veri = (int *)realloc(queue->veri, (queue->rear + 2) * sizeof(int));
    if (queue->front == -1)
        queue->front = 0;
    queue->veri[++queue->rear] = deger;
}

int dequeue(Queue *queue) 
{
    if (queue->front == -1 || queue->front > queue->rear)
    {
        printf("queue bos.\n");
        return -1;
    }
    return queue->veri[queue->front++];
}

int main() 
{
    int sec, deger;
    printf("lutfen hangi yapiyi kullanarak deger girmek istediginizi seciniz.\n\n");
    printf("1.stack\n");
    printf("2.queue\n");
    scanf("%d", &sec);

    if (sec == 1)
    {  
        Stack stack;
        stbaslangic(&stack);

        while (1)
        {
            printf("lutfen bir deger giriniz. (programi sonlandirmak icin -1 giriniz.): ");
            scanf("%d", &deger);

            if (deger == -1)
                break;

            push(&stack, deger);
        }

        printf("\nstack yapisina yazdiginiz degerler:\n");
        while (stack.top != -1) 
        {
            printf("%d\n", pop(&stack));
        }

        free(stack.veri);
    }
    else if (sec == 2) 
    {   
        Queue queue;
        quebaslangic(&queue);

        while (1) 
        {
            printf("lutfen bir deger giriniz. (programi sonlandirmak icin -1 giriniz.): ");
            scanf("%d", &deger);

            if (deger == -1)
                break;
            enqueue(&queue, deger);
        }

        printf("\nqueue yapisina yazdiginiz degerler:\n");
        while (queue.front != -1 && queue.front <= queue.rear) {
            printf("%d  ", dequeue(&queue));
        }

        free(queue.veri);
    } 
    else 
    {
        printf("tanimlanmayan bir sayi girdiniz.\n");
    }

    return 0;
}