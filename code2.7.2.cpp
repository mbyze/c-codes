#include <stdio.h>
#include <stdlib.h>
#define encok_stack 100
#define encok_queue 100

typedef struct stack{
    int top;
    int veriler[encok_stack];
}Stack;

typedef struct queue{
    int front;
    int rear;
    int veriler[encok_queue];
}Queue;

void push(Stack* stack, int deger)
{
    if(stack->top == encok_stack-1) 
    {
        printf("stack dolu!\n");
    }
    else 
    {
        stack->veriler[++stack->top]=deger;
        printf("eleman eklendi: %d\n",deger);
    }
}

int pop(Stack* stack) 
{
    if(stack->top == -1) 
    {
        printf("stack bos!\n");
        return -1;
    } 
    else 
    {
        int deger = stack->veriler[stack->top--];
        printf("eleman cikarildi: %d\n", deger);
        return deger;
    }
}

void enqueue(Queue* queue, int deger) 
{
    if((queue->rear+1)%encok_queue==queue->front) 
    {
        printf("queue dolu!\n");
    } 
    else 
    {
        if(queue->front== -1)
            queue->front=0;
        queue->rear=(queue->rear+1)%encok_queue;
        queue->veriler[queue->rear]=deger;
        printf("eleman eklendi: %d\n",deger);
    }
}

int dequeue(Queue* queue) 
{
    if(queue->front== -1) 
    {
        printf("queue bos!\n");
        return -1;
    } 
    else 
    {
        int deger=queue->veriler[queue->front];
        if(queue->front==queue->rear)
        {
            queue->front=queue->rear= -1;
        }
        else
        {
            queue->front=(queue->front+1)%encok_queue;

        }
        printf("eleman cikarildi: %d\n",deger);
        return deger;
    }
}

void displayStack(Stack* stack) 
{
    if(stack->top== -1) 
    {
        printf("stack bos.\n");
    }
    else 
    {
        printf("stack elemanlari:\n");
        for(int i=stack->top;i>=0;i--) 
        {
            printf("%d\n",stack->veriler[i]);
        }
    }
}

void displayQueue(Queue* queue) 
{
    if(queue->front== -1) 
    {
        printf("queue bos.\n");
    } 
    else 
    {
        printf("queue elemanlari:\n");
        int i=queue->front;
        while(i!=queue->rear) 
        {
            printf("%d  ",queue->veriler[i]);
            i=(i+1)%encok_queue;
        }
        printf("%d\n",queue->veriler[i]);
    }
}

int main() 
{
    int sec;
    int deger;
    printf("hangi yapiyi kullanmak istediginizi secin.\n");
    printf("1. stack\n");
    printf("2. queue\n");
    scanf("%d",&sec);

    if(sec==1) 
    {
        Stack stack;
        stack.top = -1;

        while(1) 
        {
            printf("\nyapmak istediginiz islemi secin\n");
            printf("1. eleman ekle\n");
            printf("2. eleman bul ve sil\n");
            printf("3. tum elemanlari listele\n");
            printf("4. cikis\n");
            scanf("%d",&sec);

            switch(sec) 
            {
                case 1:
                    printf("Eklenecek elemani girin: ");
                    scanf("%d",&deger);
                    push(&stack,deger);
                    break;
                case 2:
                    deger=pop(&stack);
                    break;
                case 3:
                    displayStack(&stack);
                    break;
                case 4:
                    printf("\nprogram sonlandiriliyor.\n");
                    exit(0);
                default:
                    printf("gecersiz bir sayi girdiniz.\n");
            }
        }
    } 
    else if(sec==2) 
    {
        Queue queue;
        queue.front=queue.rear= -1;

        while (1) 
        {
            printf("\nislem secin:\n");
            printf("1. eleman ekle\n");
            printf("2. eleman bul ve sil\n");
            printf("3. tum elemanlari listele\n");
            printf("4. cıkıs\n");
            printf("seciminiz: ");
            scanf("%d",&sec);

            switch(sec) 
            {
                case 1:
                    printf("eklemek istediginiz elemani girin: ");
                    scanf("%d",&deger);
                    enqueue(&queue,deger);
                    break;
                case 2:
                    deger=dequeue(&queue);
                    break;
                case 3:
                    displayQueue(&queue);
                    break;
                case 4:
                    printf("\nprogram sonlandiriliyor.\n");
                    exit(0);
                default:
                    printf("gecersiz bir sayi girdiniz.\n");
            }
        }
    } 
    else 
    {
        printf("gecersiz bir sayi girdiniz. program sonlandiriliyor.\n");
    }
return 0;
}
