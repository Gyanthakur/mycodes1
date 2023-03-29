#include<bits/stdc++.h>
using namespace std;
int main(){



/*
// 5 
// 1 2 3 2 1
// 3
// 2 3 4
    int n;
    cin>>n;
    int *a = new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // pre computation 
    // we create a n size of hash array 
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
       hash[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        // fetching 
        cout<<"freq of :" <<num<< " is : "<<hash[num]<<endl;
    }

    */

/*

    // for string we create a hash 
    string s;
    cin>>s;
    // pre computation
    int  hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        // fetching 
        cout<<"freq of " << c<<" is "<<hash[c-'a']<<endl;
    }


*/

// when size of arr is greater than 10^6  then we use arr size is 256

    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    
return 0;
}