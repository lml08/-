#include<stdio.h>
char A[110];
void ASC(char *p1)
{
	if(*p1=='Z')
	   *p1+=7;
	else 
	   *p1+=33;
}
void phone(char* p2)
{
	int i,j;
	char(*pt)[4];
	char B[8][4]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
	pt=B;
	for(i=0;i<8;i++)
	   for(j=0;j<4;j++)
	      if(*p2==*(*(pt+i)+j))
	         {
	            *p2=50+i;
	         }
}
int main()
{
	char *p;
	while(scanf("%s",A)!=-1)
	{
	  p=A;
	  while(*p)
	 {
	   if(*p>='A'&&*p<='Z')
	      ASC(p);
	   else if(*p>='a'&&*p<='z')
	      phone(p);
	   else ;
       p++;
	 }
     printf("%s\n",A);
    }
     return 0;
}
