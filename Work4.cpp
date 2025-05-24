#include <iostream>
#include<fstream>
#include<string>
using namespace std;
// Задание 1
  class Figure{
    protected:
    int __sides_count;
    string __name;
    public:
    Figure(int sides_count, string name) 
    {
      __sides_count=sides_count;
      __name=name;
    }  
    Figure() : __name("Unknown"), __sides_count(-1) 
    {

    }
    ~Figure()
    {
      
    }
    void get_sides_count()
    {
      int sides_count = 0;
      
      cout<<sides_count<<endl;
    }
     void get_name()
    {
       string name = "Figure";
      cout<<name<<endl;
    }
    void print()
    {
      int sides_count = 0;
      string name = "Figure";
      cout<<"sides_count: "<<endl;
      cout<<name<<": "<<sides_count<<endl;
    }

  };
  class Triangle : public Figure
  {
   public:
    void print_2()  
    { 
     
      int sides_count = 3;
      string name = "Triangle";
      cout<<name<<": "<<sides_count<<endl;
    }

  };
  class Quadrangle : public Figure
  {
    public:

    void print_3()
    {
          
       int sides_count = 4;
       string name = "Quadrangle";     
        cout<<name<<": "<<sides_count<<endl;
      
    }

  };

  int main()
  {
    Figure Work;    
    Work.print(); 
    Triangle Two;
    Two.print_2();
    Quadrangle Three;
    Three.print_3();    
    return 0;
    
  }


  // Задание 2 
  class Triangle
  {
    protected:
    string __name;
    int __a; int __b;  int __c;
    int __A;  int __B;  int __C;
    public:
     Triangle( string name,int a,int b, int c,int A,  int B,  int C)
    {
      __name=name;
       __a=a; __b=b;__c=c; 
       __A=A; __B=B; __C=C;
    }  
    Triangle() : __name("Unknown"), __a(-1), __b(-1), __c(-1), __A(-1), __B(-1), __C(-1)
    {

    }
    ~Triangle()
    {
      
    }
    void set_print_info()
    {
      string name = "Triangle";
      int a =10; int b =20; int c=30;
      int A =50; int B =60; int C =70;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Right_angled_triangle : public Triangle
  {
    public:
     void set_print_info()
    {
      string name = "Right_angled_triangle";
      int a =10; int b =20; int c=30;
      int A =50; int B =60; int C =90;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Isosceles_triangle : public Triangle
  {
    public:
     void set_print_info()
    {
      string name = "Isosceles_triangle";
      int a =10; int b =20; int c=10;
      int A =50; int B =60; int C =50;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Equilateral_triangle : public Triangle
  {
    public:
     void set_print_info()
    {
      string name = "Equilateral_triangle";
      int a =30; int b =30; int c=30;
      int A =60; int B =60; int C =60;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  
   class  Quadrangle
   { protected:
    string __name;
    int __a; int __b;  int __c; int __d;
    int __A;  int __B;  int __C; int __D;
    public:
     Quadrangle( string name,int a,int b, int c,int d,int A,  int B,  int C, int D)
    {
      __name=name;
       __a=a;  __b=b; __c=c; __d=d;
       __A=A;  __B=B; __C=C; __D=D;

    }  
    Quadrangle() : __name("Unknown"), __a(-1), __b(-1), __c(-1), __d(-1), __A(-1), __B(-1), __C(-1), __D(-1)
    {

    }
    ~Quadrangle()
    {
      
    }
    void set_print_info()
    {
      string name = "Quadrangle";
      int a =10; int b =20; int c=30; int d=40;
      int A =50; int B =60; int C =70; int D =80;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }
   };
 class Rectangle : public Quadrangle
 {
 public:
void set_print_info()
    {
      string name = "Rectangle";
      int a =10; int b =20; int c=10; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
class Square : public Quadrangle
 {
 public:
void set_print_info()
    {
      string name = "Square";
      int a =20; int b =20; int c=20; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
 class Parallelogram : public Quadrangle
 {
 public:
void set_print_info()
    {
      string name = "Parallelogram ";
      int a =20; int b =30; int c=20; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
class Rhomb : public Quadrangle
 {
 public:
void set_print_info()
    {
      string name = "Rhomb";
      int a =30; int b =30; int c=30; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };

   int main()
   {
    Triangle Triangle_0;
    Triangle_0.set_print_info();
    Right_angled_triangle Right;
    Right.set_print_info();
    Isosceles_triangle Isosceles;
    Isosceles.set_print_info();
    Equilateral_triangle Equilateral;
    Equilateral.set_print_info();
    Quadrangle Two;
    Two.set_print_info();
    Rectangle Rectangle;
    Rectangle.set_print_info();
    Square Square;
    Square.set_print_info();
    Parallelogram Parallelogram;
    Parallelogram.set_print_info();
    Rhomb Rhomb;
    Rhomb.set_print_info();

    return 0;

   }

// Задание 3 
class Figure{
  public:
virtual void set_print_info()=0;
virtual bool check()=0;
};

  class Triangle : public Figure
  {
    protected:
    string __name;
    int __count_sides;
    int __a; int __b;  int __c;
    int __A;  int __B;  int __C;
    public:
     Triangle( string name,int count_sides,int a,int b, int c,int A,  int B,  int C)
    {
      __name=name;
      __count_sides=count_sides;
       __a=a; __b=b;__c=c; 
       __A=A; __B=B; __C=C;
    }  
    Triangle() : __name("Unknown"),__count_sides(-1), __a(-1), __b(-1), __c(-1), __A(-1), __B(-1), __C(-1)
    {

    }
    ~Triangle()
    {
      
    }
    virtual bool check()
    { int A =50; int B =60; int C =70;
      int sum=0;
      sum= A+B+C;
      if(sum =180)
      {
        cout<<"correct"<<endl;
      } else{
        cout<<"wrong"<<endl;
      }
return 0;
    }
    virtual void set_print_info()
    {
      
      string name = "Triangle";
      int count_sides =3;
      int a =10; int b =20; int c=30;
      int A =50; int B =60; int C =70;
      cout<<name<<endl;
      cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Right_angled_triangle : public Triangle
  {
    public:
    virtual bool check()
    { int A =50; int B =60; int C =90;
      
      if(C = 90)
      {
        cout<<"correct";
      } else{
        cout<<"wrong";
      }
return 0;
    }
    virtual void set_print_info()
    {
      string name = "Right_angled_triangle";
      int count_sides =3;
      int a =10; int b =20; int c=30;
      int A =50; int B =60; int C =90;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Isosceles_triangle : public Triangle
  {
    public:
    virtual bool check()
    { int a =10; int b =20; int c=10;
      int A =50; int B =60; int C =40;
      if( a == c && A == C)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
    virtual void set_print_info()
    {
      string name = "Isosceles_triangle";
      int count_sides =3;
      int a =10; int b =20; int c=10;
      int A =50; int B =60; int C =50;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  class Equilateral_triangle : public Triangle
  {
    public:
    virtual bool check()
    { 
      int A =50; int B =60; int C =40;
      if( A==60 && B==60 && C==60)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
    virtual void set_print_info()
    {
      string name = "Equilateral_triangle";
      int count_sides =3;
      int a =30; int b =30; int c=30;
      int A =60; int B =60; int C =60;
      cout<<endl;
      cout<<name<<endl;
      cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<endl;
    }
  };
  
   class  Quadrangle : public Figure
   { protected:
    string __name;
     int __count_sides;
    int __a; int __b;  int __c; int __d;
    int __A;  int __B;  int __C; int __D;
    public:
     Quadrangle( string name, int count_sides,int a,int b, int c,int d,int A,  int B,  int C, int D)
    {
      __name=name;
        __count_sides = count_sides;
       __a=a;  __b=b; __c=c; __d=d;
       __A=A;  __B=B; __C=C; __D=D;

    }  
    Quadrangle() : __name("Unknown"),  __count_sides(-1), __a(-1), __b(-1), __c(-1), __d(-1), __A(-1), __B(-1), __C(-1), __D(-1)
    {

    }
    ~Quadrangle()
    {
      
    }
   virtual bool check()
    { 
     int A =50; int B =60; int C =70; int D =80;
     int sum =0;
     sum=A+B+C+D;
      if( sum=360)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
   virtual void set_print_info()
    {
       int count_sides =4;
      string name = "Quadrangle";
      int a =10; int b =20; int c=30; int d=40;
      int A =50; int B =60; int C =70; int D =80;
      cout<<endl;
      cout<<name<<endl;
       cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }
   };
 class Rectangle : public Quadrangle
 {
 public:
 virtual bool check()
    { 
      int a =10; int b =20; int c=10; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      if( a==b && b==d && A==90 && B==90 && C==90 && D==90)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
virtual void set_print_info()
    {
      string name = "Rectangle";
       int count_sides =4;
      int a =10; int b =20; int c=10; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      cout<<endl;
      cout<<name<<endl;
       cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
class Square : public Quadrangle
 {
 public:
 virtual bool check()
    { 
      int a =20; int b =20; int c=20; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      if( a==b && b==d && a==d && d==b && A==90 && B==90 && C==90 && D==90)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
virtual void set_print_info()
    {
      string name = "Square";
      int count_sides =4;
      int a =20; int b =20; int c=20; int d=20;
      int A =90; int B =90; int C =90; int D =90;
      cout<<endl;
      cout<<name<<endl;
       cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
 class Parallelogram : public Quadrangle
 {
 public:
 
virtual bool check()
    { 
      int a =20; int b =30; int c=20; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      if( a==c && b==d  && A==C && D==B)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
virtual void set_print_info()
    {
      string name = "Parallelogram ";
      int count_sides =4;
      int a =20; int b =30; int c=20; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      cout<<endl;
      cout<<name<<endl;
       cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };
class Rhomb : public Quadrangle
 {
 public:
 virtual bool check()
    { 
      int a =30; int b =30; int c=30; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      if( a==b && b==d && a==d && d==c && a==c && c==b  && A==C && D==B)
      {
        cout<<"correct";

      } else{
        cout<<"wrong";
      }
return 0;
    }
virtual void set_print_info()
    {
      string name = "Rhomb";
      int count_sides =4;
      int a =30; int b =30; int c=30; int d=30;
      int A =30; int B =40; int C =30; int D =40;
      cout<<endl;
      cout<<name<<endl;
       cout<<"Count sides = "<<count_sides<<endl;
      cout<<"Sides: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<endl;
      cout<<"Corner: "<<"A = "<<A<<" "<<"B = "<<B<<" "<<"C = "<<C<<" "<<"D = "<<D<<endl;
    }

 };

   int main()
   {
    Triangle Triangle_0;
    Figure* P_prt = &Triangle_0;
    P_prt->check();
    P_prt->set_print_info(); 

    Right_angled_triangle Right;
    P_prt = &Right;
    P_prt->check();
    P_prt->set_print_info();

    Isosceles_triangle Isosceles;
    P_prt = &Isosceles;
    P_prt->check();
    P_prt->set_print_info();

    Equilateral_triangle Equilateral;
    P_prt = &Equilateral;
    P_prt->check();
    P_prt->set_print_info();

    Quadrangle Two;
    P_prt = &Two;
    P_prt->check();
    P_prt->set_print_info();

    Rectangle Rectangle;
    P_prt = &Rectangle;
    P_prt->check();
    P_prt->set_print_info();

    Square Square;
    P_prt = &Square;
    P_prt->check();
    P_prt->set_print_info();

    Parallelogram Parallelogram;
   P_prt = &Parallelogram;
    P_prt->check();
    P_prt->set_print_info();

    Rhomb Rhomb;
    P_prt = &Rhomb;
    P_prt->check();
    P_prt->set_print_info();

    return 0;

   }
