//WAP to illustrate the concept of default constructor.

#include<iostream>
using namespace std;
class ABC
{
     int p,q;
   public:
     ABC () 
     {
         p = 2;
        cout<< p;
      }
};

int main()
{
    ABC ();  
    return 0;
 }
