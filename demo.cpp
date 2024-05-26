#include <iostream>
using namespace std;

class Base
{
	public:
	virtual void func();
    Base();
	//private:
	int a;
	int b;
	Base(const Base& b_obj)
	{
		this->a = 20;
		this->b = 20;
	}
	Base& operator=(const Base& b_obj)
	{
		this->a = b_obj.a;
		this->b = b_obj.b;
		return *this;
	}
	~Base()
	{
		cout << "destructor called...\n";
	}
};

Base::Base()
{
	a = 10;
	b = 20;
}

void Base::func() 
{
	cout << "Inside base class func...\n";
}
/*class Derived : public Base
{
	public:
	void func() const;

	private:
	int a;
	int b;
};

void Derived::func() const
{
	cout << "Derived class func...\n";
}*/

int main()
{
	Base *b_obj1 = new Base();
    b_obj1->a = 50;
	b_obj1->b = 50;

	//Base b_obj2 = b_obj1;
	cout << b_obj1->a << "\n" << b_obj1->b << endl;
	//delete b_obj1;

	/*b_obj2 = b_obj1;
	cout << b_obj2.a << "\n" << b_obj2.b;*/
	return 0;
}
