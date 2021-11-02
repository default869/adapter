#include <iostream>
using namespace std;

class Decimetre
{
private:
	int dm = 20;
public:
	Decimetre() {}
	Decimetre(int dm)
	{
		this->dm = dm;
	}
	int getDecimetre()
	{
		return dm;
	}
	~Decimetre() {}
};

class Control
{
public:
	virtual int getSantimetre() = 0;
};

class Santimetre : public Control
{
private:
	Decimetre dm;
public:
	Santimetre(Decimetre dm1) :dm(dm1) {}
	virtual int getSantimetre()
	{ 
		return dm.getDecimetre() * 10;
	}
	~Santimetre() {}
};

int main()
{
	int b;
	cin >> b;
	Decimetre a(b);
	Control* p = new Santimetre(a);
	cout << "Santimetrs: " << p->getSantimetre();
	return 0;
}