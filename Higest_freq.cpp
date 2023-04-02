#include<bits/stdc++.h>
using namespace std;
int main(){

return 0;
}



class Solution {
  public:
    vector<int> topK(vector<int>& a, int k) {
        unordered_map<int,int>m;
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        vector<int>v;
       priority_queue<pair<int,int>>pq;
        for(auto it : m)
        {
            pq.push({it.second,it.first});   
        }
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};


