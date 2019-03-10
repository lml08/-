#include<stdio.h>
int main()
{
	int i,N,sum=0,k,p,q;
	scanf("%d",&N);
	int a[20];
	char *pt;
    for(i=0;i<N;i++)
	   while(1)
	      {  
	         char str[100]; char c;
			 scanf("%s",str); getchar(); pt=str;
	         while(c=*pt)
			 {
	           if(c=='\0')  break;
			   sum=0;
			   k=p=q=0;
		       if(c==71)  k+=1;
		       if(c==78)  p+=16;
		       if(c==67)  q+=12;
		       sum=k+p+q;
		       a[i]=sum;
		       pt++;
		     }
		  }
     for(i=0;i<N;i++)
        printf("%d\n",a[i]);
		return 0;
} 
