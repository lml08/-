#include<stdio.h>
#define EOF '0'
int main()
{ 
  char c;
  while((c=getchar())!=EOF)
   { 
     if(c>='A'&&c<='Z')
     c-='A'-'a';
     printf("%c",c);
   }
   return 0;
}
