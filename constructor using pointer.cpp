//WAP to illustrate the concept of constructor using this pointer.

#include<iostream> 
using namespace std;

class p1 
{  
    char c1[10]; 
       
	public: 
     	void funct() 
    	{ 
        	cout<<"Object Address : "<<this<<"\n"; 
        } 
}; 
int main() 
{ 
    p1 w1; 
    w1.funct(); 
	
	return 0;
} 
