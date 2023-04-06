#include<bits/stdc++.h>
using namespace std;


vector<long long> fact(long long n)
{
   long long fact=1;
   vector<long long>ans;
   long long i=1;
   while(fact<=n)
   {
        fact*=i;
        if(fact<=n)
        ans.push_back(fact);
        i++;
   } 
   return ans;
}
int main(){
    long long n;
    cin>>n;
    vector<long long >ans = fact(n);
    for(auto num : ans)
   {
        cout<<num<<" ";
   }
   cout<<endl;
    // fact(n);
return 0;
}