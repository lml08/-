#include<stdio.h>
#include<string.h>
int main()
{ 
  int i,j; 
  char str[110];
  scanf("%s",str);//ʹ��scanfҪ���ǿո����⣬�����ո��TAP��ͣ���� 
  i=strlen(str);
  for(j=0;j<i;j++)
     if(str[j]>='A'&&str[j]<='Z')
        str[j]+=32;
  printf("%s",str); 
  return 0;
}

