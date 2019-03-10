#include<stdio.h>
int n,m,k;
void Combine(int* A,int x,int i,int s)
{
	int a=0 ;
	if(i>n) return ;
	Combine(A,x,i+1,s);
	A[m-x]=i;x--;
	if(x==0)
	  { 
	    for(;a<m;a++) printf("%d",A[a]);
	    printf("\n");
		/*int sum;for(;a<m;a++) sum+=A[a];
            if(sum==s)
	    { 
               for(a=0;a<m;a++);
               printf("%d",A[a]);
	       printf("\n"); 
	     }*/
         }
    Combine(A,x,i+1,s);
}
int main() 
{
	scanf("%d %d %d",&n,&m,&k);
	int A[m];
	Combine(A,m,1,k);
	return 0;
}
