#include <iostream>
 
using namespace std;
 
class Swap {
        int temp, a, b;
 
public:
 
        Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
 
    
        friend void swap(Swap&);
};
 

void swap(Swap& s1)
{
    
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b;
 
    
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b;
}
 

int main()
{

    Swap s(4, 6);
    swap(s);
    return 0;
}


// A friend class can access private and protected members of other class in which it is declared as friend. 
// It is sometimes useful to allow a particular class to access private members of other class. 
// For example, a LinkedList class may be allowed to access private members of Node. 

// A friend class can access both private and protected members of the class in which it has been declared as friend.