// function overloading
#include<iostream>
using namespace std;

class Cal {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    Cal C;                                                    //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23);     
   return 0;    
}    


// Constructor overloading
#include <iostream>
using namespace std;

class construct
{

public:
	float area;
	
	// Constructor with no parameters
	construct()
	{
		area = 0;
	}
	
	// Constructor with two parameters
	construct(int a, int b)
	{
		area = a * b;
	}
	
	void disp()
	{
		cout<< area<< endl;
	}
};

int main()
{
	
	construct o;
	construct o2( 10, 20);
	
	o.disp();
	o2.disp();
	return 1;
}
