#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n!=0)
    {
        int ld=n%10;
        ans=ans*10+ld;
        n/=10;
    }
    cout<<"Reverse number is "<< ans;
return 0;
}