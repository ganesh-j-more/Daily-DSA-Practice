// Class Simple Examples Practice

// #include <iostream>
// using namespace std;

// // Class definition
// class Name {
// public:              // Access specifier (public = can be accessed outside class)
//     string Surename;    // Data member (attribute)
//     int year;        // Data member

//     // Member function
//     void displayInfo() {
//         cout << "Surename: " << Surename << ", Year: " << year << endl;
//     }
// };

// int main() {
//     // Create an object of Car
//     Name Name1;

//     // Assign values
//     Name1.Surename = "More";
//     Name1.year = 2006;

//     // Call member function
//     Name1.displayInfo();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class holl{
//   public:
 
//   string Student_Name;
//   string Email;
//   int Std_ID;
//   string Degree;
  
//      void displayinfo(){
//       cout<<"Student_Name: "<<Student_Name<<",Email_ID: "<<Email<<", Student_ID: "<<Std_ID<<", Bachalor of Degree :"<<Degree;
//      }
// };
  
//   int main(){
//     holl holl1;

//     holl1.Student_Name = "More Ganesh Jitesh";
//     holl1.Email = "ganeshmore23gmail.com";
//     holl1.Std_ID = 04;
//     holl1.Degree = "BCS";

//     holl1.displayinfo();

//     return 0;

//   }   
 
////////////////////// Simple Question///////////////////////////////////////

#include<iostream>
using namespace std;
class x{
  private:

  int a = 5;
  friend class y;
};

class y{
  public:

  void show(x obj){
    cout<<obj.a<<endl;
  }
};
