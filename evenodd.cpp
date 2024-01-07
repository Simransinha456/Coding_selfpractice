// Find even or odd in this program  

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;

//     // for even 
//     if(n %2 ==0){
//         cout << "Even";
//     }
//     else {
//         cout << "Odd";
//     } 
//     return 0;
// }



// Find which number is greatest among three numbers========================

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    
//     int a, b, c;
//     cout << "Enter number";
//     cin >> a >> b >>c;

//     if(a>=b && a>=c){
//         cout<< "A is greater";
//     }
//      if(b>=a && b>=c){
//         cout<< "B is greater";
//     } else {
//         cout << "C is grater";
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isalpha(ch)){

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "The character is a vowel." << endl;
    } else  {
        cout << "The character is a consonant." << endl;
    } 
    }
    else {
        cout << "The character is not a valid character." << endl;
    }
    return 0;
}

