#include<bits/stdc++.h>
using namespace std;
int main(){

/*
    vector<int>v;
    v.push_back(10);
    v.push_back(1123);
    v.push_back(15);
    v.emplace_back(42);
    v.emplace_back(23);
    v.emplace_back(278);
    vector<int> v2(v);

    vector<int>::iterator it=v.begin();
    it++;
    cout<< *it <<endl;
    vector<int>::iterator it1= v.end();
    // vector<int>::iterator it= v.end();
    cout<<*(it1)<<" ";
    it1+=2;
    cout<<endl;

    v2.erase(v2.begin()+1);
    v2.erase(v2.begin()+1,v2.begin()+4);
    v2.push_back(34);
    v2.push_back(341);
    v2.push_back(342);
    v2.push_back(343);
    v2.pop_back();
    v2.pop_back();
    v2.pop_back();
    for(auto it=v2.begin();it!=v2.end();it++)
    {
        cout<<*(it)<<" ";
    } 

    // it++;
    cout<<endl;

    // vector<pair<int,int>>vp;
    // vp.push_back({2,4});
    // vp.push_back({2,4});
    // vp.push_back({2,4});
    

*/



/*



// lern list 
    list<int>ls;
    ls.push_back(2);
    ls.push_front(1);
    ls.push_front(14);
    ls.emplace_back(4);
    ls.emplace_front(01);
    ls.pop_back();
    ls.pop_front();
    

    for(auto it = ls.begin();it!=ls.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<ls.size()<<endl;

    // rest all list function like that vector
    // begin,end,rend,rbegin,swap,insert,size




*/



/*


// learn deque 

    deque<int>d;
    d.push_back(19);
    d.push_front(1);
    d.emplace_back(18);
    d.emplace_front(2);
    swap(d[2],d[1]);
    for(auto it=d.begin();it!=d.end();it++)
    {
        cout<<*(it) <<" ";
    }
    cout<<endl;
    cout<<d.size()<<endl;

    // rest function same as vector 
    // push,pop,insert,swap,size,end,begin



    */





/*   

//    explain stack 
    stack<int>s;
    s.push(5);
    s.push(10);
    s.push(13);
    s.push(14);
    s.push(15);
    s.pop();
    // for (auto it:s)
    cout<<s.top()<<" ";
    cout<<endl;
    cout<<s.size()<<endl;
    s.emplace(10);
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
     stack<int>s2;
     s.swap(s2);
     cout<<s2.top()<<endl;
     cout<<s.empty()<<endl;
*/



/*
// explain queue 
    queue<int>q;
    q.push(5);
    q.push(5);
    q.push(5);
    q.push(5);
    q.emplace(6);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    // swap size push emplace function same as stack ;
   


*/


/*
    // explain priority queue 
    priority_queue<int>pq;
    pq.push(5);
    pq.push(125);
    pq.push(35);
    pq.push(45);
    cout<<pq.top()<<endl;

    // here pushing operation is in an increasing order ;
    // large element sabse last me aayegaa and chhota element sabse pahle aayrag/
     

    // agar hme iskoo reverse order me print ya push karna hai to hme "greater<int>pq" ka usr karna padega

    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(3);
    pq1.push(5);
    pq1.push(37);
    pq1.push(1);
    pq1.pop();
    cout<<pq1.top()<<endl;
    // for(auto it:pq1)
    // cout<<it<<" ";



    */





//    explain set 
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);


    for(auto it:s)
    cout<<it<<" ";
    cout<<endl;
    // auto it = s.find(5);
    auto a=s.find(5);
    cout<<*a<<endl;
    int cnt = s.count(5);
    cout<<cnt<<endl;


    return 0;
}