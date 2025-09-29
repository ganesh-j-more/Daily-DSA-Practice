// Q-4 print 1
            // 2 2
            // 3 3 3
            // 4 4 4 4
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter the number: ";
//   cin>>n;

//   int row = 1;

//   while (row<=n)
//   {
//     int column = 1;
//     while (column <= row)
//     {
//       cout<<row;
//       column = column + 1;
//     }
//     cout<<endl;
//     row = row + 1;
//   }
//   return 0;
// }
// Q-5 print 1
            // 2 3
            // 4 5 6
            // 7 8 9 10

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the number: ";
  cin>>n;

  int row = 1;
  int toprint = 1;

  while (row<=n)
  {
    int column = 1; 
    while (row<=n)
    {
      cout<<column;
      toprint = toprint + 1;
     column = column + 1;
    
    }
    cout<<endl;
    row = row + 1;
  }
  return 0;
}