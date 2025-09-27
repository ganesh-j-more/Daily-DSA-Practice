// // Check Even Number

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the Number : ";
//   cin>>n;

//   if(n % 2 == 0){
//     cout<<"Even";
//   }
//   return 0;
// }

// Check Odd Number

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the Number: ";
//   cin>>n;

//   if (n%2==1)
//   {
//     cout<<"Odd";
//   }
//   if (n%2==0)
//   {
//   cout<<"Even";
//   }
//   return 0;
// }

// Check if a Number is Zero

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the Number :";
//   cin>>n;
//   if (n == 0)
//   {
//     cout<<"ZERO";
//   }
//   return 0;
// }

// // print = 1 2 3 4
//            1 2 3 4
//            1 2 3 4
//            1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){

//   int n;
//   cout<<"Enter the number: ";
//   cin>>n;

//   int i = 1;
//   while (i<=n)
//   {
//     int j = 1;
//     while (j<=n)
//     {
//       cout<<j<<" ";
//       j = j+1;
//     }
//     cout<<endl;
//     i = i + 1;
//   }
//   return 0;
// }

// // print  1 2 3
//           4 5 6
//           7 8 9

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;

  int i = 1;

  int toprint = 1;

  while (i<=n)
  {
    int j = 1;
    while (j<=n)
    {
      cout<<toprint <<" ";
      toprint = toprint + 1;
      j = j + 1;

      // cout<<j<<" ";
      // j = j + 1;
    }
    cout<<endl;
    i = i + 1;
  }
  return 0;
}