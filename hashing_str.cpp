#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    int q;
    cin >>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<m[c]<<endl;
    }
return 0;
}