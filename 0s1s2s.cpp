// fIND 0s 1s 2s in sorted array===========

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 0, 1, 1, 0, 2, 1, 0, 2, 2, 0, 1};
    vector<int> ans;
    int zero = 0;
    int one = 0;
    int two = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            zero++;
        } else if (arr[i] == 1) {
            one++;
        } else {
            two++;
        }
    }

    for (int i = 0; i < zero; i++) {
        ans.push_back(0);
    }

    for (int i = 0; i < one; i++) {
        ans.push_back(1);
    }

    for (int i = 0; i < two; i++) {
        ans.push_back(2);
    }

    cout << "Sorted array is: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}



