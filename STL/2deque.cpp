// deque---- when we wants to insert and delete  at the same time  or  perform push and back operation
// It is also dynamic it can also increase or decrease its size as per need like vector

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int>d;
    
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);

    d.pop_front();
    d.pop_back();
 
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
} 



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// deque<int> d;
//     d.push_back(1);
//     d.push_back(2);
//     d.push_front(3);
//     d.push_front(4);
//     //output: 4312

//     cout <<"front value " << d.front() << endl; //4
//     cout <<"back value " << d.back() << endl;//2
//     cout <<"empty or not " << d.empty() << endl;

//     cout << "before erase " <<d.size() <<endl;
//     d.erase(d.begin(), d.begin()+1);

//     cout << "after erase " <<d.size() <<endl; // delete all elements
//     for (int i:d) { // to check which element is present 
//         cout << i << endl;
//     }
//     return 0;
// }