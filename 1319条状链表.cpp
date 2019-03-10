#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct str{
	int color;
	struct str *next;
};
struct str *head,*p1,*p2,*p3;
int flag=0;
int sum; 
void DEL(int x)// p1在前p2在后 
{
	for(flag=0;flag<sum;flag++) 
	{
	  if(p1->color==x) break;
	  p1=p1->next;
	  if(flag==0) continue;
	  p2=p2->next; 
    }
    p2->next=p1->next;
    p1=p1->next;
    p2=p1;
	p1=p2=head;

	for(flag=1;flag<sum;flag++)
	{
	  // printf("%d ",p1->color);
       p1=p1->next;
	}
	p1=p2=head;

}
void ADD(int x,int y)//在x的前面不是后面  p2在前 p1在后 
{
	for(flag=0;flag<sum;flag++) 
	{
	  if(p2->color==x) break;
	  p2=p2->next;
	} 
	while(flag-->1) p1=p1->next;
    //printf("%d\n",p1->color);
    //printf("%d\n",p2->color);
    p3=(str*)malloc(sizeof(str));
    p3->color=y;
	p1->next=p3;
	p3->next=p2;  
	p1=p2=head;
	
	for(flag=0;flag<sum;flag++)
	{
	   //printf("%d ",p1->color);
       p1=p1->next;
	}
	p1=p2=head;
}
int main()
{
	int i,j,k,n,m;
	scanf("%d %d",&n,&m);
    sum=n;
	for(i=0;i<n;i++)
    {
    	p1=(str*)malloc(sizeof(str));
        scanf("%d",&p1->color);
        if(i==0) 
        {
        	head=p1;
        	p2=p1;
        }
        p2->next=p1;
        p2=p1;
	}
	p1=p2=head;
	char cmd[4];
	for(i=0;i<m;i++)
	{
		j=0,k=0;
		scanf("%s",cmd);
		if(strcmp(cmd,"DEL")==0) 
		{
		  scanf("%d",&j);
	      DEL(j);
	      sum--;
		}
		else 
		{
		  scanf("%d %d",&j,&k);
	      ADD(j,k);
	      sum++;
		}
	}
	printf("%d\n",sum);
	p1=head;
	for(i=0;i<sum;i++)
	{
	   printf("%d ",p1->color);
       p1=p1->next;
	}
	return 0;
}
