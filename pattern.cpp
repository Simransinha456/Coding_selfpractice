// 1234
// 1234
// 1234
// 1234

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter row number ";
//     cin >> row;

//     int col;
//     cout << "Enter col number ";
//     cin >> col;

//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout << i+1; // for rows
//            // cout << j+1; // for col
//         }
//             cout << endl;
//     }
//     return 0;
// }


// 123
// 456
// 789

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter row number ";
//     cin >> row;

//     int col;
//     cout << "Enter col number ";
//     cin >> col;

//     int num=1;
//     for(int i=1; i<=row; i++){
//         for(int j=1; j<=col; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// *#*#*
// #*#*#
// *#*#*
// #*#*#

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row;
//     cout << "Enter row number ";
//     cin >> row;

//     int col;
//     cout << "Enter row number ";
//     cin >> col;

//    for(int i=0; i<row;i++){
//     for(int j=0; j<col; j++){
//         if((i+j)%2 ==0){
//             cout << "*" << " ";
//         } else{
//             cout << "#" << " ";
//         }
//     }
//     cout << endl;
//    }


// for(int i=0; i<row; i++){
//     bool k=1;
//     for(int j=0; j<col; j++){
//         if(j%2==0 && k==1){
//             cout << "*" << " ";
//             k=0;
//         } else if(j%2==0 && k==0){
//             cout << "@" << " ";
//             k=1;
//         }
//         else {
//             cout << "#" << " ";
//         }
//     }
//     cout << endl;
// }
//     return 0;
// }



// ============================================================================================================== 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=5; // or take row=5, col=5
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row=5;
//     int col=5;

//     for(int i=0; i<row; i++){
//         for( int j=0; j<col-i-1; j++){
//             cout << " ";
//         }
//         for(int k=0; k<=i; k++){
//             cout << "*";
//         }
//         cout << endl;
//     }   
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int row=5;
//     int col=5;

//     for(int i=0; i<row; i++){
//         for( int j=0; j<col-i-1; j++){
//             cout << " ";
//         }
//         for(int k=0; k<=i; k++){
//             cout << "* "; // difference in space
//         }
//         cout << endl;
//     }   
//     return 0;
// }




//    *
//   ***
//  *****
// *******


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout << " ";
//         }
//         for(int k=0; k<i*2+1; k++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// 1
// 12
// 123
// 1234
// 12345

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=6; 
//     for(int i=1; i<n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=7;
//     for(int i=1; i<n; i++){
//         for(int j=1; j<n-i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// 54321
// 5432
// 543
// 54
// 5


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n=5;
//     for(int i=0; i<n; i++){
//         for(int j=5; j>i; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// 1 2 3 4 5 
// 6 7 8 9 
// 10 11 12 
// 13 14
// 15



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6;
    int num=1;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}




