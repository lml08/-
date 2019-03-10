#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,s,len,flag=1,temp,time=0;
	int k;
	char a[30];
	int times[4];
 	while(scanf("%s",a)!=-1)
 	     {
 	        flag=1;k=0;
 	        for(i=0;i<=strlen(a);i++)
			   {	
			    time++;
				if(a[i]=='.'||a[i]=='\n') 
				  {
				  	times[k]=time;
				  	k+=1;
				    time=0;
				    continue;
			 	  }
				if(a[i]<'0'||a[i]>'9') 
				   flag=0;
				else a[i]-='0';     
			   }
			s=0;k=0;
			for(i=0;i<strlen(a);i++)
		    	for(j=0;j<times[k];j++)
			     {
			     	s*=10;
					temp=a[i]+a[i]*s;
			     	if(temp<=0||temp>255||temp<=0||temp>255||temp<=0||temp>255||temp<=0||temp>255)  flag=0;
					if(a[i]=='.')
			     	  {
			     	  	k++;s=0;temp=0;continue;
			     	  }
			     	printf(" %d ",temp);
			     }  
            if(flag==0) { printf("N\n");}
			else { printf("Y\n");}	     
		 }
	 return 0;
 	    
} 
