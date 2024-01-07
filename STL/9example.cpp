#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    
    //always take in sorted order in binary search
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    // finding the elements present or not-
    cout << "Finding 5-> " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << "lower bound-> " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
    cout << "upper bound-> " << upper_bound(v.begin(), v.end(), 7)-v.begin() << endl;

    // find min and max 
    int a =3;
    int b =5;
    cout << "max-> " <<max(a,b) << endl;
    cout << "min-> " <<min(a,b) << endl;
    swap(a,b);
    cout << "a-> " <<a << endl;
    cout << "b-> " <<b << endl;

    // reverse
    string str = "abcd";
    reverse(str.begin(), str.end());
    cout << "Reverse string-> " << str << endl;


    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // v.push_back(9);    //rotate the previous values--
    rotate(v.begin(),v.begin()+1, v.end());
    cout << "after rotating the values-> ";
    for(int i : v){
        cout << i <<" " ;
    }
    cout << endl;

    rotate(v.begin(),v.begin()+2, v.end());
    cout << "after rotating the values-> ";
    for(int i : v){
        cout << i <<" " ;
    }
    cout << endl;

    rotate(v.begin(),v.begin()+4, v.end());
    cout << "after rotating the values-> ";
    for(int i : v){
        cout << i <<" " ; 
    }
    cout << endl;


    //sorting -
    sort(v.begin(), v.end());
    cout << "after sorting-> ";
    for(int i : v){
        cout << i <<" " ;
    }

    return 0;
}