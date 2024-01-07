#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "SimranSinha";

    for(int i=0; i<str.length(); i++){
        if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    cout << "Toggle string is: " << str << endl;
     return 0;
}