// set---- Only take unique elements
// sorted array me elements aate hai

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(2);
    s.insert(10);
    // it will print only unique element and in sorted (ascending order)

    for (auto i : s){
        cout << i << endl;
    }
    cout << endl;

    // erasing--
    s.erase(s.begin());
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    // count -- it will tell that the element is present or not
    cout << "-2 is present or not: " << s.count(-2) <<endl;
    cout << endl;



    // set<int>::iterator itr = s.find(5);
    // for (auto it = itr; it != s.end(); it++)
    // {
    //     cout << *it << " " <<endl;
    // }
    // cout << endl;

    //or

    auto itr = s.find(5);
    for (auto it = itr; it != s.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
}  

