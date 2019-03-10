#include<stdio.h>
#include<string.h>
#include<windows.h>
#define N 4
int main()
{
	int i,j,k,m,n;
	char str[100];
	scanf("%s",str);
	for(i=0;i<5;i++)
	    printf("\n");
	char yanhua[7][7];
	memset(yanhua,' ',sizeof(yanhua));
    for(i=0;i<3;i++) 
		 yanhua[0][i]=N;	   
	for(i=0;i<3;i++) 
		 yanhua[i][6]=N;
	for(i=4;i<7;i++) 
		 yanhua[i][0]=N;
	for(i=4;i<7;i++) 
		 yanhua[6][i]=N;
		 
	for(i=1;i<6;i++)
	     yanhua[i][3]=N;
	for(i=1;i<6;i++)
	     yanhua[3][i]=N;
	
	yanhua[1][2]=N;
	yanhua[2][5]=N;
	yanhua[4][1]=N;
	yanhua[5][4]=N;	 	    
	for(i=0;i<7;i++)
	   {
			printf("\n\n");
			for(j=0;j<7;j++)
	           {
	             printf("  ");
				 printf("%2c",yanhua[i][j]);
			   }
			   
	    }
	for(i=0;i<5;i++)
	    printf("\n");
	system("color 0A");
	Sleep(700);
	system("color 0B");
	
	
	for(i=0;i<5;i++)
	    printf("\n");    
	for(i=0;i<7;i++)
	   {
			printf("\n\n");
			for(j=0;j<7;j++)
	           {
	             printf("  ");
				 if(yanhua[i][j]==N) yanhua[i][j]=3;
				 printf("%2c",yanhua[i][j]);
			   }
			   
	    }
	for(i=0;i<5;i++)
	    printf("\n");
	system("color 0C");
	Sleep(700);    
	system("color 0F");
	
	
	for(i=0;i<5;i++)
	    printf("\n");
	 
	 for(i=0;i<5;i++)
	    printf("\n");    
	for(i=0;i<7;i++)
	   {
			printf("\n\n");
			for(j=0;j<7;j++)
	           {
	             printf("  ");
				 if(yanhua[i][j]==3) yanhua[i][j]=30;
				 printf("%2c",yanhua[i][j]);
			   }
			   
	    }
	for(i=0;i<5;i++)
	    printf("\n");
	system("color 0D");
	Sleep(700);    
	system("color 0E");    
	    
	Sleep(8000);
	return 0;
	
} 
