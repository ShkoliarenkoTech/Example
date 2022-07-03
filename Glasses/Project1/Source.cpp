#include<iostream>
#include<string>

using namespace std;




class glasses
{
protected:
	string name;
	float price;
public:
	glasses() {};
	glasses(string name1, float price1 )
	{
		name = name1;
		price = price1;
	}

	string getname() { return name; }
	float getprice() { return price;}


	void print();

};

void glasses::print()
{
	cout << "The name of the glasses:" << getname()<<endl;
	cout << "The price:" << getprice() << endl;
}

class sundef :public glasses
{
protected:
	string thone;
	int number;
public:
	sundef(string thone1, int number1 , string name1, float price1) :glasses(name1, price1)
	{
		thone = thone1;
		number = number1;
	}
	string getthone() { return thone; }
	int getnumber() { return number;}
	void print();
};

void sundef::print ()
{
	cout << "The thone: " << getthone() << endl;
	cout << "The number: " << getnumber() << endl;
	cout << "The price: " << glasses::getprice() << endl;
}


class diopt: public glasses
{
protected:
	float zoom_scale;
	string frame;
public:
	diopt(float zoom_scale1 , string frame1 , string name1, float price1) :glasses(name1, price1)
	{
		zoom_scale = zoom_scale1;
		frame = frame1;
	}
	float getscale() { return zoom_scale; }
	string getframe() { return frame; }
	void print();
};
void diopt::print()
{
	cout << "The scale is:" << getscale() << endl;
	cout << "The frame:" << getframe() << endl;
	cout << "The price: "  << glasses::getprice() << endl;
}



void main()
{
	sundef one("black",5 , "Ray ban" , 1000.0);
	diopt two(5.0 ,"Eco-wood" , "RedBull" , 150.0);
	cout << "sundef glasses: " << endl;
	one.print();
	cout << endl;
	cout << "dioptri glasses: " << endl;
	two.print();
}
