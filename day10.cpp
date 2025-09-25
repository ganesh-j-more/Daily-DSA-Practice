// // Homework

// #include<iostream>
// using namespace std;

// int main(){
//   int a = 9;
//   if (a == 9)
//   {
//     cout<<"NINEY"<<endl;
//   }
//   if (a>0)
//   {
//     cout<<"positive";
//   }

//   else{
//     cout<<"negative";
//   }
  
// }

// 2) 

// #include<iostream>
// using namespace std;

// int main(){
//   int a = 2;
//   int b = a+1;

//   if ((a=3)==3)
//   {
//     cout<<a;
//   }

//   else{
//     cout<<a+1;
//   }
  
// }

// 3) 
 
//  #include<iostream>
//  using namespace std;
// int main(){
//  int a = 24;

//  if(a>20)
//  {
//   cout<<"LOVE";
//  }
//  else if (a==24)
//  {
//   cout<<"LOVELY";
//  }

//  else{
//   cout<<"Ganuu";
//  }
//  cout<<a;
// }

// 4)
// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z') {
//         cout << "Lowercase" << endl;
//     }
//     else if (ch >= 'A' && ch <= 'Z') {
//         cout << "Uppercase" << endl;
//     }

//     else if (ch >= '0' && ch <= '9') {
//         cout <<"THIS IS NUMERICAL"<< endl;
//     }

//     else {
//         cout << "Not an alphabet" << endl;
//     }

//     return 0;
// }

// // loops

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter Number ";
//   cin>>n;
//   int i = 1;

//   while (i<=n)
//   {
//     cout<<i<<" ";
//     i = i+1;
//   }
// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter Your Number";
//   cin>>n;

//   int i = 1;
//   int sum = 0;

//   while (i<n)
//   {
//     sum = sum + i;
//     i = i+1;
//   }
//   cout<<"Value Of Sum is"<<sum<<endl;
// }

// Pattern Question

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  
  int i = 5;

  while (i<=n)
  {
    int j = 1;
    while (j<=n)
    {
      cout<<"*";
      j = j+1;
    }
    cout<<endl;
    i = i+1;
  }
}