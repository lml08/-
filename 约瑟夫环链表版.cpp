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
	tail->next=head; //���� 
    for(i=1;i<k;i++)
       p1=p1->next;    //ʹָ��ָ���k����  
	while(n-->1) 
	{
	   for(i=1;i<m;i++)
	   {
	      p1=p1->next;
	   } 
	   p2=p1->next;//P312 
	   printf("%d\n",p2->num);   
	   p1->next=p2->next;
	   p2=p2->next;//p2һֱ��p1ǰ�� 
    }
    printf("%d",p2->num);
	return 0;
}
