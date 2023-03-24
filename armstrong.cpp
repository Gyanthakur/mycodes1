#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
    int sum=0,cnt=0;
    while(n!=0)
    {
        cnt++;
        n/=10;
    }
    while(n!=0)
    {
        int ld=n%10;
        sum+=pow(ld,cnt);
        n/=10;
    }
    if(a==sum)
    cout<<a<< " is armstrong number!";
    else
    cout<<a<< " is not armstrong number!";
return 0;
}