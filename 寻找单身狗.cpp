//之所以有这么多个版本是因为 效率不同 这个版本由于用了冒排 超时了 
#include<stdio.h>
int main()
{
	int i,j,x;
	scanf("%d",&x);
	int sz[x];
	for(i=0;i<x;i++) scanf("%d",&sz[i]);
	for(i=0;i<x;i++)
	  for(j=0;j<x;j++)
	    {
	    	if(i==j) continue;
	    	if(sz[i]&&sz[i]==sz[j]) sz[i]=sz[j]=0;   
		} 
	for(i=0;i<x;i++)
	   if(sz[i]!=0) printf("%d ",sz[i]);
	printf("\b");
	return 0;
}
