//还是不懂取余对数字的影响  但是题目有提示 居然还是不会做 （不会去猜！） 
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
