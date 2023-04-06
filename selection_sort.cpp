#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[mini])
            mini=j;
        }
        // swap(arr[i],arr[mini]);
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int * a= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}