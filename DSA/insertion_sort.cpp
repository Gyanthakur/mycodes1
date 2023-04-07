#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
            cout<<"run"<<endl;
        }
    }
}

// time complexity = o(n^2) : in worst case 
// time complexity = o(n) : in best case 

// void insertion_sort(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>0;j--)
//         {
//             if(a[j]<a[j-1])
//             {
//                 swap(a[j],a[j-1]);
//             }
//         }
//         cout<<"run"<<endl;
//     }
// }
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}