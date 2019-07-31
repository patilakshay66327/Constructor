//WAP to print the Student details using  constructor

#include<iostream>
#include<string.h>
using namespace std;

class Student
{


int roll;

float height, weight;

public:

Student ()
{

roll=0;

height=0;

weight=0;

}

void display ()

{

cout<<"\n roll no : "<<roll;

cout<<"\n Height : "<<height;

cout<<"\n weight : "<<weight;

}

~ Student ()

{

cout<<"\n destroying object";

}

};

int main ()

{

Student obj;

obj.display();

return 0;
}
