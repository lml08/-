#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,len,num=0;
	int flag=1;
	char IP[50];
	char *pt;
 	while(scanf("%s",IP)!=-1)
 	     { 
 	        flag=1;
		    pt=IP;
 	        for(i=0;i<4;i++)//�ֳ�4���� 
			  {
			  	  char a[20];
			  	  char*p;p=a;//pָ��a 
			      while(*pt!='\0')//���ַ���û�н���ʱ 
			        {	
			          printf("%c",*pt);
			          if(*pt=='.') 
					     break;//�ָ�4����
					  printf("%c",*pt);
					  *pt-='0'; 
			          if(*pt>='0'&&*pt<='9')  
					    {
					     *p=*pt;
						 p++; //printf("%c\n",*p);p++;}//�ж������ֻ����ַ� 
					    }
					  else 
					     flag=0;//ֻҪ�ַ��Ͳ�ΪIP��ַ 
					  pt++;	
 	                }
 	              len=strlen(a);
				   //printf("%d",len);//�ж�һ�����Ǽ�λ�� 
 	              for(j=1,k=1;j<=len;j++,k*=10)//ûת���� 
					  num+=a[j-2]*k;//��ԭ��ֵ 
				  if(num<=0||num>255||num<=0||num>255||num<=0||num>255||num<=0||num>255)  flag=0;//�ж���ֵ��Χ 
              }
			if(flag==0) { printf("N\n");}
			else { printf("Y\n");}	     
		 }
	 return 0;
 	    
} 
