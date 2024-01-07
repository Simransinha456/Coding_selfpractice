#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int earliestLastAppearance(vector<int>& arr) {
    unordered_map<int, int> mp;
    for(int i = 0; i < arr.size(); i++) {
        mp[arr[i]] = i;
     }    

    int minIndex = arr.size();
    int ans = -1;
    for(auto& x : mp) {
        if(x.second < minIndex) {
            minIndex = x.second;
            ans = x.first;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {10, 30, 20, 10, 20};
    cout << "Element earliest last appearance is: " << earliestLastAppearance(arr) << endl;
    return 0;
}