//一个比较好的活学活用 
#include<stdio.h>
#include<string.h> 
int main()
{
	int n,i,j,x;
	scanf("%d",&n);
	int Judge[n+1];
	memset(Judge,0,sizeof(Judge));
	for(i=1;i<=n;i++)
    {
    	x=j=i;
    	while(j/10>0)
    	  {
    	    x+=j%10;
    	    j/=10;
    	  }
    	x+=j;
    	if(x<n) Judge[x]=1;
    }
    for(i=1;i<n;i++)
        if(Judge[i]==0)
		    printf("%d\n",i);//这里用到了从润兴师兄那里看来的方法   
}
