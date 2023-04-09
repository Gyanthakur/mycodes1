#include<bits/stdc++.h>
using namespace std;
int findindex(int a[],int n, int x)
{
    if(n==0) return -1;
    if(a[0]==x) return 0;
    int ans=findindex(a+1,n-1,x);
    if(ans==-1)
    return -1;
    else
    return ans+1;
    
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