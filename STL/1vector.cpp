#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v; 

    v.push_back(0);
    v.push_back(1);
    v.push_back(5);
    v.push_back(13);
    v.push_back(10); 

    cout << "Capacity: " << " " << v.capacity() << endl;
    cout << "size: " << " " << v.size() << endl;
    cout << "Element at index -> " << v.at(3) << endl;

    vector<int> a(5, 1);
    cout << "print a: ";

    for (size_t i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
