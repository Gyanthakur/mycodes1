#include<bits/stdc++.h>
using namespace std;
int febo(int n)
{
    if(n==0) return 0;
    if( n==1) return 1;
    int feb= febo(n-1)+febo(n-2);
    return feb;
}
int main(){
    int n;
    cin>>n;
    int ans = febo(n);
    cout<<ans<<endl;
return 0;
}