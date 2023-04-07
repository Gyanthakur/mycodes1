#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didswap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j+1],a[j]);
                didswap=1;
            }
        }
        if(didswap==0)
        break;
        cout<<"run"<<endl;
    }
}
// time complexity = o(n^2) : in worst case 
// time complexity = o(n) : in best case 
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}