#include<stdio.h>
#include<stdlib.h>
struct Student{
	int num;
	char name[30];
	float score;
	struct Student* next;
};
int main()
{
	struct Student *head,*Tail,*p;
	int n=0;
	do{
		p=(struct Student *)malloc(sizeof(struct Student));
	    scanf("%d %f",&p->num,&p->score);
	    if(p->num==0) break;
		if(n==0)
	      { head=p;Tail=p;}
	    else
	    {
	    	Tail->next=p;
	    	Tail=p;
	    	Tail->next=0;
	    }
	    n++;
	}while(p->num!=0);
    p=head;
   while(p!=0)
    {
      printf("%6d%6.2lf\n",p->num,p->score);
      p=p->next;
    }
}
