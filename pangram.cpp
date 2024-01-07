#include <bits/stdc++.h>
using namespace std;

bool isPangram(string& str){
    set<int>result;
    for(int i=0; i<str.length(); i++){
        if(isalpha(str[i])){
            result.insert(tolower(str[i]));
        }
    }
    if(result.size()==26){
        return true;
    }else {
        return false;
    }
}
int main() {
    string str ="The quick brown fox jumps over the lazy dog";
    if(isPangram(str)){
        cout << "This is a pangram";
    }
    else {
        cout << "Not a pangram";
    }
    return 0;
}