// // Q1
// #include<iostream>
// using namespace std;

// int main (){
//   int a, b = 1;
//   a = 10;

//   if (++a)
//   {
//     cout<<b;
//   }
//   else{
//     cout<<++b;
//   }
//   return 0;
// }

// Q2

// #include<iostream>
// using namespace std;

// int main(){
// int a = 1;
// int b = 2;
 
// if (a-->0 && ++b>2)
// {
//   cout<<"stage 1 -Inside If";
// }else{
//   cout<<"stage 2 -Inside else";
// }
// cout<<a<<" "<<b<<endl;
// }

// Q3

// #include<iostream>
// using namespace std;

// int main (){
//   int a = 1;
//   int b = 2;
//   if (a-- > 0 || ++b > 2)
//   {
//     cout<<"Stage1 - Inside If";
//   }else{
//     cout<<"Stage2 - Inside Else";
//   }
//   cout<<a<<" "<<b<<endl;
// }

// Q4)

// #include<iostream>
// using namespace std;

// int main(){
//   int number = 3;
//   cout<<(25 * (++number));
// }

// Q5)

// #include<iostream>
// using namespace std;

// int main(){
//   int a = 1;
//   int b = a++;
//   int c = ++a;
//   cout<<b;
//   cout<<c;
//   return 0;
// }

// Q1 For Loop flow

// #include<iostream>
//  using namespace std;

// int main(){
//   int n;
//    cout<<"Enter thr number"<<endl;
//    cin>>n;
//    int sum = 0;
//    for ( int i = 0; i < n; i++)
//    {
//      sum += i;
//    }
//    cout<<sum<<endl;
// }

// this problem using continue Statement

// #include<iostream>
// using namespace std;

// int main(){
// for (int  i = 0; i <5; i++)
// {
//   cout<<"hi"<<endl;
//   cout<<"hey"<<endl;
//   continue;
//   cout<<"reply to karde"<<endl;
// }

// }
#include<iostream>
using namespace std;

int main(){
  for (int i = 0; i < 5; i--)
  {
    cout<<i<<" ";
    i++;
    continue;
  }
 
}