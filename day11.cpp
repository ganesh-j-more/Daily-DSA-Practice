// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;
//   int i = 1;
//   while (i<n)
//   {
//     int j = 1;
//     while (j<n);
//     {
//       cout<<"*";
//       j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
//   return 0;
// }

// 2) 

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   int i = 1;
//   while (i<=n)
//   {
//       int j = 1;
//       while (j <= n)
//       {
//         cout<<n-j+1;
//         j = j + 1;
//       }

//       cout<<endl;
//       i = i + 1;
//   }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;

    int row = 1;                          // row starts at 1
    while (row <= n) {
        int col = 1;                      // reset column for each row
        while (col <= row) {
            cout << col;
            col++;
        }
        cout << "\n";                   // move to next row
        row++;
    }
    return 0;
}
