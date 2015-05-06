#include<stdio.h>
#include<stdlib.h>

typedef struct ywq
{
	int a;
	char *p;
	ywq *next;
}ywq;

int main()
{
	char j[20];
	struct 	ywq *head,*p1,*p2;
	head=NULL;
	p1=p2=(struct ywq *)malloc(sizeof(struct ywq));
	scanf("%d",&p1->a);
	scanf("%s",j);
	p1->p=j;
	p1->next=NULL;
	head=p1;
printf("%s",p1->p);
	for(int i=0;i<3;i++)
	{
		p1=(struct ywq *)malloc(sizeof(struct ywq));
		scanf("%d",&p1->a);
		p2->next=p1;
		p2=p1;
	}	
	p2->next=NULL;


	for(;;)
	{
	printf("%d\n",head->a);
	head=head->next;
	if(head->next==NULL)
	{
		printf("%d\n",head->a);
	break;
	}
	
	
	}


	return 0;
}