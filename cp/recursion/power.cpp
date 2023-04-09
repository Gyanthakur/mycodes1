#include<bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
    if(b==0)return 1;
    if(b==1)return a;
    int smallop=power(a,b-1);
    int op=a*smallop;
    return op;
}
int main(){
    int n,x;
    cin>>n>>x;
    int ans=power(n,x);
    cout<<ans<<endl;
return 0;
}