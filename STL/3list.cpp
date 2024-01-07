#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;

    l.push_back(1);
    l.push_front(2);
     l.push_back(3);
    // 2 1 3

    for (int i:l) {
        cout << i;
    }
    cout << endl;

    //erase--
    l.erase(l.begin());
    cout << "after erase" << endl; // 1 3
      for (int i:l) {
        cout << i;
    }
    cout << endl;

    // size
    cout << "size of list: " << l.size() << endl; // after erasing

    list<int> n(5,10); //copy of previous list  
     for (int i:n) {
        cout << i << " ";
    }
    return 0;
}
