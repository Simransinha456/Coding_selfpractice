#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

    s.push("love");
    s.push("simran");
    s.push("sinha");
    s.push("hello");

    // output: hello

    cout << "top element: " << s.top() << endl;

    s.pop();
    cout << "top element: " << s.top() << endl;
    // output: sinha

    cout << "size of stack: " << s.size() << endl;
    cout << "empty or not: " << s.empty() << endl; // 0 means false
}