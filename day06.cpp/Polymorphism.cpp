// // Polimorphism

// #include<iostream>
// using namespace std;
// class print{
//   public:
//   void display (int x) {
//      cout << x;
//   }

//   void display(double y){
//     cout<<y;
//   }

// };

// int main(){
//   print obj;

//   obj.display(10);
//   obj.display(16.43);
// };

// Function Overding

#include<iostream>
using namespace std;

class a{
  public:
   void show (){
    cout<<"I am base";
   }
};
class b : public a{
  public:
  void show (){
    cout<<"I am Derived";
  }
};

int main(){
  b b1;
  b1.show();
}