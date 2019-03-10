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
 	        for(i=0;i<4;i++)//分成4部分 
			  {
			  	  char a[20];
			  	  char*p;p=a;//p指向a 
			      while(*pt!='\0')//当字符串没有结束时 
			        {	
			          printf("%c",*pt);
			          if(*pt=='.') 
					     break;//分割4部分
					  printf("%c",*pt);
					  *pt-='0'; 
			          if(*pt>='0'&&*pt<='9')  
					    {
					     *p=*pt;
						 p++; //printf("%c\n",*p);p++;}//判断是数字还是字符 
					    }
					  else 
					     flag=0;//只要字符就不为IP地址 
					  pt++;	
 	                }
 	              len=strlen(a);
				   //printf("%d",len);//判断一部分是几位数 
 	              for(j=1,k=1;j<=len;j++,k*=10)//没转类型 
					  num+=a[j-2]*k;//还原数值 
				  if(num<=0||num>255||num<=0||num>255||num<=0||num>255||num<=0||num>255)  flag=0;//判断数值范围 
              }
			if(flag==0) { printf("N\n");}
			else { printf("Y\n");}	     
		 }
	 return 0;
 	    
} 
