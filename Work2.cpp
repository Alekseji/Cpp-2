#include <iostream>
#include <string>
using namespace std;
class Calculator
{

  double num1; 
  double num2; 
  double calculator_1;
  double calculator_2;
  double calculator_3;
  double calculator_4;
  double calculator_5;
  double calculator_6;
    public:
 
    
  Calculator& add()
  {
   calculator_1 = num1 + num2;
    cout<<num1<<"+"<<num2<<"="<<calculator_1<<endl;
    return *this;
  }
  Calculator&  multiply()
 {
   calculator_2 = num1 * num2;
    cout<<num1<<"*"<<num2<<"="<<calculator_2<<endl;
    return *this;
 }
 Calculator&  subtract_1_2()
 {
   calculator_3 = num2 - num1;
 cout<<num2<<"-"<<num1<<"="<<calculator_3<<endl;
 return *this;
 }
 Calculator&  subtract_2_1()
 {
   calculator_4 = num1 - num2;
 cout<<num1<<"-"<<num2<<"="<<calculator_4<<endl;
 return *this;
 }
 Calculator&  divide_1_2()
{
   calculator_5 = num1/num2;
cout<<num1<<"/"<<num2<<"="<<calculator_5<<endl;
return *this;
}
Calculator&  divide_2_1()
 {
   calculator_6 = num2/num1;
 cout<<num2<<"/"<<num1<<"="<<calculator_6<<endl;
 return *this;
 }

 
};

int main()
{
    double num1;
    double num2;
    
    cout << "Enter number num1:  " << endl;
    cin >> num1;  
    cout << "Enter number num2:  " << endl;
    cin >> num2;  

 if(num1 != 0 )
 {
cout<<num1<<endl;
 }
else
 {
    cout<<"incorrect input"<<endl;
    
 }
 
 
 if(num2 != 0)
 {
cout<<num2<<endl;
 }
 else
 {
    cout<<"incorrect input"<<endl;    
 }
 

    Calculator Cal1;
    Cal1.add(). multiply().subtract_1_2().subtract_2_1().divide_1_2().divide_2_1();

    return 0;
}
 
// Задание 2
//  class Counter
//  {
//   int num;
//   int plus;

//  };
//  Counter& plus_one()
//  {
//   if(num=+)
//   plus=num+1;
//  }

