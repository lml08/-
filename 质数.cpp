#include<stdio.h>
#include<math.h>
int main()
{

  int i,n;
  scanf("%d",&n);
  for(i=2;i<sqrt(n)+1;i++)
       {
     	if(i%n==0)
     	  break;
     	  printf("%d",i);
       }
   return 0;
}
