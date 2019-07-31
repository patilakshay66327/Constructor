//WAP to illustrate concept of destructor

#include <iostream>
using namespace std;
class dis
{
    public:
      dis() 
       {
 	    cout << "constructor call" << endl;
       }
       ~dis() 
       {
             cout << "Distructor call" << endl;
       }
};

int main()
{
    dis d1; 
    return 0;
}
