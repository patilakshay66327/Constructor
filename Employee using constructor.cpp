//WA P to print the Employee details using constructor 

#include<iostream>
#include<string.h>
using namespace std;

class Employee
{


int emp_id;

float height, weight;

public:

Employee ()
{

emp_id=0;

height=0;

weight=0;

}

void display ()

{

cout<<"\n emp_id : "<<emp_id;

cout<<"\n Height : "<<height;

cout<<"\n weight : "<<weight;

}

~ Employee ()

{

cout<<"\n destroying object";

}

};

int main ()

{

Employee obj;

obj.display();

return 0;
}
