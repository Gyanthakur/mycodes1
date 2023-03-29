#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int ,int>m;
    int *a = new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<m[num]<<endl;
    }
return 0;
}