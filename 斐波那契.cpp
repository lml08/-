//���ǲ���ȡ������ֵ�Ӱ��  ������Ŀ����ʾ ��Ȼ���ǲ����� ������ȥ�£��� 
#include<iostream>
using namespace std;
int a[1000000];
int main()
{
    int n;
    cin>>n;
    a[1]=a[2]=1;
    for(int i=3;i<1000000;i++){
        a[i]=a[i-1]+a[i-2]%10007;
    }
    cout<<a[n];
}
