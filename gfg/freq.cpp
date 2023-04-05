#include<bits/stdc++.h>
using namespace std;
int main(){



/*

N = 5
arr[] = {2, 3, 2, 3, 5}
P = 5
Output:
0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.


*/
    int n;
    cin>>n;
    int * a = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    // int * ans = new int [n];
    vector<int>ans(n);
    for(int i=1;i<=n;i++)
    {
        ans[i-1]=m[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

return 0;
}