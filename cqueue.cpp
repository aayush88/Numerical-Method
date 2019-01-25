#include<stdio.h>
#include<conio.h>
#define SIZE 5
struct cqueue
{
	int item[SIZE]
	int front,rear;
}cq;
void enqueue(struct cqueue * cq, int num)
{
	if((cq->rear+1)%SIZE==cq->front)
	{
		printf("\n Queue is full");
	}
	else
	{
		cq->rear=(cq->rear+1)%SIZE;
		cq->item[cq->reaqr]=num;
	}
}
void dequeue(struct cqueue*cq)
{
	int dt;
	if(cq->front==cq->rear)
	{
		printf("\n Queue is empty");
	}
	else
	{
		cq->front=(q->front+1)%SIZE;
		dt=cq->item[cq->front];
		printf("\n deleted item = %d",dt);
	}
}
void display(struct cqueue*cq)
{
	int i;
	if(cq->front==cq->rear)
	{
		printf("\n Queue is empty");
	}
	else
	{
		printf("\n content of queue is:");
		for(i=(cq->front+1)%SIZE;i!=cq->rear;i=(i+1)%SIZE)
		{
			printf("%d \t",cq->item[i]);
		}
		printf("%d",cq->item[cq->rear]);
	}
}

void main()
{
	int num,choice;
	clrscr();
	cq.front=SIZE-1;
	cq.rear=SIZE-1;
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	while(1)
}
