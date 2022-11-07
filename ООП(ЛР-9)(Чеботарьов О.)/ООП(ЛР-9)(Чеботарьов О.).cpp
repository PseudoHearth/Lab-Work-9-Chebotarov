#include<iostream>

using namespace std;

class Base {

public:

	virtual void myname() {
		cout << "This is class Base" << endl;

	}

};

class DerA : public Base {

public:

	void myname()
	{
		cout << "DerA" << endl;
	}

};

class DerB :public Base {

public:

	void myname()
	{
		cout << "DerB" << endl;
	}

};

int main()
{
	Base one;
	Base* tmp;
	DerA two;
	DerB X;
	tmp = &one;
	tmp->myname();
	tmp = &two;
	tmp->myname();
	tmp = &X;
	tmp->myname();

	return 0;

}