#include<bits/stdc++.h>
using namespace std;

int main()
{
string s="NihirKotadiya";
vector<char> st;
// st.push
string ans="";
int i=0;
int n=s.size()-1;
while(!st.empty()){
    ans+=st.top();
    st.pop();
}
for (; i < count;)
{
    /* code */
}

while(i<n)
{
    swap(s[i++],s[n--]);
}
cout<<s;

return 0;
}