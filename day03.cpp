// What is Constractor ?

// #include<iostream>
// using namespace std;

// class Student {
//   int roll;

//   public:
//   void setRollno(int r){
//     roll = r;
//   }
//   void display(){
//     cout<<roll<<endl;
//   }
// };

// int main(){
//   Student s1;
//   s1.setRollno(106);
//   s1.display();
// };

#include<iostream>
using namespace std;

class student{
  int roll;

  public:
  student(int r){
  roll = r;

  cout<<roll<<endl;
  
  }
};

int main(){
  student s1(102);
}