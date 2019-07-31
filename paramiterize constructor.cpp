//WAP to illustrate the concept of Parameterized constructor.

#include<iostream>

using namespace std;

class Example 
{
    int a, b;
	public:
	    Example(int x, int y)
		{
	        a = x;
	        b = y;
    	}

    void Display() 
	{
       cout << "Values :" << a << "\t" << b;
    }
};

int main() 
{
    Example e(10, 20);
    e.Display();
    return 0;
}
