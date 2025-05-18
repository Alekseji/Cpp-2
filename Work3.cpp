#include <iostream>
#include<fstream>
#include<string>
using namespace std;

namespace std
{
   class Address
   {
     private:   
    string __city;
    string __street;
    int __house;
    int __flat;
    public:
    Address(string city, string street, int house, int flat)
    {
      __city=city;
      __street=street;
      __house=house;
      __flat=flat;

    }
  
    Address() : __city("Unknown"), __street("Unknown"), __house(-1), __flat(-1) {}
   
     string get_city(string __city)
   {
     return __city;      
    }
string get_street(string __street )
   {
     return __street;      
    }
    int get_house(int __house)
   {
     return __house;      
    }
    int get_flat(int __flat)
   {
     return __flat;
      
    }
    void print_address(int*addrees, int size)
    {
      for(int i =0; i<size;i++ )
     {
      cout<<addrees[i];
     }
   }
   };
}

int main()
{
 
    std::ofstream address{"in.txt"};
    if(address.is_open())
    
    {
       address<<"Moskva"<<endl;
       address<<"Stroitelej"<<endl;
       address<<"34"<<endl;
       address<<"12"<<endl;
       address<<"Omsk"<<endl;
       address<<"Pushkina"<<endl;
       address<<"2"<<endl;
       address<<"13"<<endl;
       address<<"Novosibirsk"<<endl;
       address<<"Mira"<<endl;
       address<<"84"<<endl;
       address<<"64"<<endl;
        
    }
   
    address.close();
    std::ifstream ifile{"in.txt"};
    if(ifile.is_open())
    {
        std::string Data{"out.txt"};

        while (ifile >> Data)
        {
            cout <<Data<<endl;
        }

    }
   
    ifile.close();
   
    Address *Array[3];
   {
    cout<<Array;
   }
    
    return 0;
}