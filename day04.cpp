// // 1) Deffault Constructor 

// #include<iostream>
// using namespace std;

// class student {
//   int roll;

//   public:
//   student(){
//     roll = 10;
//     cout<<roll;
//   }
// };

// int main(){
//   student s1;
// }

// 2) Paramiterized Constructor 
//  #include<iostream>
//  using namespace std;

//  class student {
//   int roll;
//    int name;
   
//    public:
//    student(int r){
//     roll = r;
//     cout<<roll;
//    }
//  };

//  int main(){
//   student s1(101);
//  }

 // 3) Copy Costractor
//  #include<iostream>
//  using namespace std;

//  class student {
//   public:
//   int roll;
//   string name;
//  };

//   int main(){
//   student s1;
//   s1.roll = 101;
//   s1. name = "amit";

//   student s2 = s1;
//   cout<<s2.roll<<s2.name;
//  }

////3) Copy Constractor //////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// class student{
//   private:
//   int roll;
//   string name;


//    public:
//    student(int r,string n){
//     roll = r;
//     name = n;
//    }
//    student(const student &s)
//    {
//     roll = s.roll;
//     name = s.name;
//    }
//   };

//   int main(){
//     student s1(101,"amit");
//     student s2 = s1;
//   }

///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Real Life Exam
// Bank Account System

#include<iostream>
using namespace std;

class BankAccount{
  private:
          string name;
          int accountNumber;
          double balence;
  public:  
  BankAccount(string accName, int accNumber, double initialBalence){
    name = accName;
    accountNumber = accNumber;
    balence = initialBalence;

    cout<<"Account Created Successfuly For "<<name<<endl;
  }
 void displayDetails(){
  cout<<"Name:"<<name<<endl;
  cout<<"Account Number: "<<accountNumber<<endl;
  cout<<"Balence: "<<balence<<endl;
 }
};

int main(){
  BankAccount acc1("Ganesh more",101,5000.0);
  BankAccount acc2("Poonam SIlk",102,10000.0 );

  cout<<"\n---Account Deatils---"<<endl;

  acc1.displayDetails();
  acc2.displayDetails();

  return 0;
}
