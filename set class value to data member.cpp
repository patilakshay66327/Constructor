//WAP to Create a class and set values to data members using a default , parameterized and copy constructor

#include <iostream>
#include <string.h>
using namespace std;

class person
{
	char name[30];
	int age;
	
	public:
	
		person()
		{
			strcpy(name,"Akshay");
			age = 23;
		}
		
		person(char n[], int a)
		{
			strcpy(name, n);
			age = a;
		}
		
		person(person &p)
		{
			strcpy(name, p.name);
			age =p.age;
		}
		
		void print(void)
		{
			cout<<name<<" is "<<age<<" years old."<<endl;
		}
};

int main(){

	person p1; 
	person p2("Akshay Patil",21); 
	person p3(p2); 
	
	
	cout<<"using first object"<<endl;
	p1.print();
	cout<<"using second object"<<endl;
	p2.print();	
	cout<<"using third object"<<endl;
	p3.print();	
	
	return 0;
}

