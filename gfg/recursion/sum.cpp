#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==0) return 0;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans+=i;   
    }
    return ans*ans;
}
int main(){

/*

Input:
N=5
Output:
225
Explanation:
13+23+33+43+53=225

*/

    int n;
    cin>>n;
    // int sum=0;
    // for(int i=1;i<=n;i++)
    // {
    //     sum+=i;
    // }
    // int ans=sum*sum;
    // cout<<ans<<endl;
    int ans=sum(n);
    cout<<ans<<endl;
return 0;
}