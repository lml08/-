#include <stdio.h>

void f(int n,int m)
{
    char line[n];
    for (int i = 0; i < n; i++)
        line[i] = ' ';
    line[0] = line[n-1] = 'X';
    char area[n-1][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            area[i][j] = ' ';
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j || i+j == n-1)
                area[i][j] = 'X';
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%c",area[i][j]);
            printf("\n");
        }
    }
    
	for (int j = 0; j < n; j++)
                printf("%c",line[j]);
	//printf("\n");
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int a[n],b[n],i;
    for (i = 0; i < n; i++)
        scanf("%d %d",&a[i],&b[i]);
    for (i = 0; i < n-1; i++)
    {
    	f(a[i],b[i]);
    	printf("\n\n");
    }
    f(a[i],b[i]);
    return 0;
}

