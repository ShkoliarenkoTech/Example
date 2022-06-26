#include<iostream>
#include<string>

using namespace std;


class figura
{
public:
	virtual float S()= 0;

};


class kolo :public figura
{
private:
	int r;
public:
	kolo()
	{
		r = 0;
	}
	kolo(int r1)
	{
		r = r1;
	}
	void show()
	{
		cout << "Circle radius  = ", r;
	}
	float S()
	{
		return 2 * 3.14*r*r;
	}

	~kolo()
	{
		cout << "\nDelete circle";
	}
};


class pryam : public figura
{
	float a;
	float b;

public:
	pryam(float a1, float a2)
	{
		a = a1;
		b = a2;
	}
	void show()
	{
		cout << "lenght 1 =" << a << "lenght 2 = " << b << endl;
	}
	float S()
	{
		return a * b;
	}

	~pryam()
	{
		cout << "\nDelete rectangle";
	}
};

	void main()
	{
		kolo one(5);
		pryam two(5, 8);
		figura *pokasch;
		pokasch = &one;
		cout << "Ploscha circle = " << pokasch->S()<< endl;
		pokasch = &two;
		cout << "Ploscha rectangle = " << pokasch->S() << endl;
	}