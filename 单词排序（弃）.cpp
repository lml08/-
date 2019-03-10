#include<stdio.h>
#include<string.h> 
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	char str[n][50];
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	char temp[50];
	memset(temp,1,sizeof(temp));
	for(k=0;k<n;k++)
	  for(i=0;i<n-1-k;i++)
    	{
		  if(strlen(str[i+1])>strlen(str[i]))
		  {
		  	    strcpy(temp,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],temp);
		  }
	    }
	for(k=0;k<n;k++)
	  for(i=0;i<n-1-k;i++)
    	{ 
		  j=0;
		  //printf("==%d==",j);
		  while(j<50) 
		  {
		  	if(str[i][j]==str[i+1][j]&&j<=strlen(str[i+1])) 
			  {
			  	j++;
			  	continue;
			  }
		 	if(str[i][j]>str[i+1][j])
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],temp);
				break; 
			}
			j++;
		  }
	    }
	for(i=0;i<n;i++)
	    printf("%s\n",str[i]); 
} 
