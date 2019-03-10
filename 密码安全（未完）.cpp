#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,m,N,k;
   int flag,flag1,flag2,flag3;
   scanf("%d",&N);
   char ASC[7]={'~','!','@','#','$','%','^'};
   int A[N];
   char *p;
   for(i=0;i<N;i++)
   {
      k=0;
	  char str[50];
      scanf("%s",str);
	  p=str;
	 // printf("%c",*p);
	  j=strlen(str); 
	  if(j<8||j>=16)
	  {A[i]=0; break;}
	  while(j>0) 
	  { 
	     flag1=0;
		 if(*p>=65&&*p<=90&&flag1==0) 
	          { k+=1; flag1=1; break;} 
	     flag2=0;
	     if(*p>=97&&*p<=122&&flag2==0) 
	          { k+=1; flag2=1; break;}
		 flag3=0;
		 if(*p>=48&&*p<=98&&flag3==0) 
	          { k+=1; flag3=1; break;}	     
	     flag=0;
		 for(m=0;m<7&&flag==0;m++)
	        if(*p==ASC[m])
		      { k+=1; flag=1; break;}
	  //printf("%d  " ,A[i]);
	     p++;
	     j--;
      }
       //printf("%d",k);
	   if(k>=3) A[i]=1;
	   else   A[i]=0;
   } 
   //printf("%d",A[0]);
   for(i=0;i<N;i++)
      if(A[i]==1) printf("YES\n");
      else printf("NO\n");
} 
