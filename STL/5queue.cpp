#include <bits/stdc++.h>
using namespace std;

int main()
{
    // first in first out----

    queue<string> q;

    q.push("love");
    q.push("simran");
    q.push("sinha");
    q.push("hello");

    cout << "First element: " << q.front() << endl;  // output: love
    cout << "Last element: " << q.back() << endl;  // output: hello

    q.pop();
    cout << "First element: " << q.front() << endl;  // output: simran

    cout << "size of queue: " << q.size() << endl;
    cout << "empty or not: " << q.empty() << endl; // 0 means false
}
