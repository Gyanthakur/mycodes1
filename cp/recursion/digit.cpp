#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
    if(n==0)return 0;
    int small=digit(n/10);
    int ans=small+1;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int c= digit(n);
    cout<<c<<endl;
return 0;
}