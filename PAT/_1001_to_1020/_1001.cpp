#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b;
    cin >> a >> b;
    stack<char> ans;
    string s=to_string(a + b);
    int len=s.length();
    for (int i=len-1,j=1; i>=0 ;i--,j++) 
    {
        ans.push(s[i]);
        if(j%3==0&&j&&i&&s[i-1]!='-')
            ans.push(',');
    }
    while(!ans.empty())
    {
        cout<<ans.top();
        ans.pop();
    }
    return 0;
}