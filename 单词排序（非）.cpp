#include <stdio.h>
#include <string.h>
void swap(char *A,char *B)
{
    unsigned long len;
    if(strlen(A)>strlen(B))
    {
    	len=strlen(B);
        char temp[51];
        strcpy(temp,A);
        strcpy(A,B);
        strcpy(B,temp);
    }
    else len=strlen(A);
    for(int i=0;i<len;i++)
    {
        if(A[i]==B[i]) continue;
        if(A[i]>B[i])
        {
            char temp[51];
            strcpy(temp,A);
            strcpy(A,B);
            strcpy(B,temp);
        }
        break;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    char str[n][51];
    for(int i=0;i<n;i++)
        scanf("%s",str[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            swap(str[i],str[j]);
    int flag=1;
    for(int i=0;i<n-1;i++)
        if(!strcmp(str[i],str[i+1])) flag++;
        else
        {
        	printf("%s %d\n",str[i],flag);
            flag=1;
        }
    printf("%s ",str[n-1]);
    printf("%d\n",flag);
    return 0;
}
