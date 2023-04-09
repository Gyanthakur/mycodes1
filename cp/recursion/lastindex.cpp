#include<bits/stdc++.h>
using namespace std;
int findindex(int a[],int n, int x)
{
    if(n<0) return -1;
    if(a[n]==x)return n;
    int ans=findindex(a,n-1,x);
    return ans;
    
    
}
int main(){
    int n,x;
    cin>>n>>x;
    int * a = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int index = findindex(a,n,x);
    cout<<index<<endl;
return 0;
}