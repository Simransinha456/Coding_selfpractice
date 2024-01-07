// map--- all key are unique and it will store in key-value pair
// complexity : O(logn)
// unordered map-- o(1)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    
    // first method to insert---
    m[1] = "Simran";
    m[12] = "love";
    m[3] = "sinha";
    m[5] = "kumari";
    // output: 1 3 5 12

    // second method to insert---
    m.insert({6, "bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    //finding element---
    cout<< "find 13: " << m.count(13) << endl; // 0 means false
    cout<< "find 12: " << m.count(12) << endl; // 1 means true
    cout<< endl;

    //erasing----
    m.erase(3);
    cout<< "after erase the value is: "<< endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it  = m.find(5);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " <<endl;
    }
}