#include<iostream>
#include<string>
#include<vector>
#define MAXSIZE 256
using namespace std;
int min(int left,int right)
{
    return left < right ? left : right;
}
int GetMinCut(string str)
{
    int len = str.size();
    if (0 == len)
        return -1;
    char *cur = (char*)str.c_str();
    bool arr[MAXSIZE][MAXSIZE] = {false};
    int *dp = new int[len + 1];
    dp[len] = -1;
    for (int i = len - 1; i >= 0; i--)
    {
        dp[i] = 100000;
        for (int j = i; j < len; j++)
        {
            if (cur[i] == cur[j] && ((j -i < 2) || arr[i + 1][j - 1]))//判断是否为回文串
            {
                arr[i][j] = true;
				dp[i] = min(dp[i],dp[j + 1] + 1);
            }       
        }
    }
    return dp[0];
}
int main()
{
    string str;
    getline(cin, str);
    int ret = GetMinCut(str);
    //cout << ret;
    return 0;
}
