#include<stdio.h>
int all=0;
int p(int a,int b)
{
	int sum,all=a;
    if(b==0) return a;
	sum=2*p(a,b-1)-1;
    all+=sum; 
	return sum;
}
int main()
{
    int x,n;
    int s;
    scanf("%d %d",&n,&s);
	for(x=1;;x++)
	   {
	    p(x,n);
        if(all==s)
          {
            printf("%d",x);
         	break;
          }
        }
    return 0;
}
