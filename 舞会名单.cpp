#include<stdio.h>
#include<string.h>
typedef struct person{
	char name[25];
	char ID[20];
	char sex;
}Person;
int main()
{
	int i,n,m,numsex1,numsex2;
	scanf("%d",&n);
	Person list[n];
	for(i=0;i<n;i++)
	  scanf("%s %s %c",list[i].name,list[i].ID,&list[i].sex);
	scanf("%d",&m);
	while(m--)
	{
		numsex1=0,numsex2=0;
		char match1[30], match2[30];
		scanf("%s %s",match1,match2); 
		for(i=0;i<n;i++)
		{
		    if(!strcmp(match1,list[i].name)||!strcmp(match1,list[i].ID)) 	
		        {
		          if(list[i].sex=='F') numsex1=1;//男的1，女的0 
		            else numsex1=0;
		        }
		    if(!strcmp(match2,list[i].name)||!strcmp(match2,list[i].ID))
		        {
		          if(list[i].sex=='F') numsex2=1;//男的1，女的0 
		            else numsex2=0;
		        }
		}
		if(numsex1==numsex2) printf("N\n");
		else printf("Y\n"); 
	}
	return 0;
}
