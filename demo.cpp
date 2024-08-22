#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// Abstract class
class Base
{
    public:
    virtual void print() = 0; // pure virtual function

    virtual ~Base() 
    {
        cout << "Base class destructor called." << endl;
    }

};

class Derived : public Base
{
    public:
    void print() override;

    ~Derived()
    {
        cout << "Derived class destructor called." << endl;
    }

};

void Derived::print()
{
    cout << "Derived class: " << endl;
}


int main()
{
   [] (int data) {
    cout << "lambda: " << data << endl;
   }(10);
}




