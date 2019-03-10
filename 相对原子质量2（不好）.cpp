#include<stdio.h>
int p(char a)
{ 
   int j=0,k,p,q,sum;
   k=p=q=0;
   while(a[j]!=EOF)
    {
      i++;
   	 if(a[j]=='H')
		     k+=1;
    if(a[j]=='O')   
             p+=16;
    if(a[j]=='C')
		     q+=12;
			 sum=k+p+q;
			 }
			 return sum;
}
int main()
{   
    int i,N;
	char a[200],b[20];
	 scanf("%d",&N);
	 for(i=0;i<N;i++)
	   {
	    scanf("%s",a);
	    b[i]=p(a);}
	 for(i=0;i<N;i++)  
	  printf("%d",b[i]);
}	
