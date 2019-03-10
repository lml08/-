#include<stdio.h>
#include<stdlib.h>
struct Student{
	int num;
	struct Student* next;
};
int main()
{
	struct Student *head,*tail,*p1,*p2;
	int n,m,k;
	scanf("%d",&n);
	scanf("%d",&k);
	scanf("%d",&m);
	int i=1;
	for(;i<=n;i++)
	{	
	   p1=(struct Student *)malloc(sizeof(struct Student));
	   p1->num=i;
	   if(i==1)
	     {
	     	head=p1;
	     	tail=p1; 
	     }
	    tail->next=p1;
	    tail=p1;
	}
	tail->next=head; //建环 
    for(i=1;i<k;i++)
       p1=p1->next;    //使指针指向第k个人  
	while(n-->1) 
	{
	   for(i=1;i<m;i++)
	   {
	      p1=p1->next;
	   } 
	   p2=p1->next;//P312 
	   printf("%d\n",p2->num);   
	   p1->next=p2->next;
	   p2=p2->next;//p2一直在p1前面 
    }
    printf("%d",p2->num);
	return 0;
}
