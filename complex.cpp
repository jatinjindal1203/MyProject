#include<iostream>
using namespace std;

class Complex
{
	public:
		Complex();
		Complex(float r,float i);
		void set_Complex(float r,float i);
		float get_real();
		float get_img();
		void display();
		friend Complex operator+(Complex c1,Complex c2);
		friend Complex operator-(Complex c1,Complex c2);
		friend Complex operator*(Complex c1,Complex C2);
	private:
		float real;
		float img;
};

Complex :: Complex()
{
	this->real = 0;
	this->img = 0;
}

Complex :: Complex(float r,float i)
{
	this->real = r;
	this->img = i;
}

void Complex :: set_Complex(float r,float i)
{
	this->real = r;
	this->img = i;
}

float Complex :: get_real()
{	
	return this->real;
}

float Complex :: get_img()
{	
	return this->img;
}

void Complex :: display()
{
	std :: cout << this->real << " + i" << this->img << endl;
}

Complex operator+(Complex c1,Complex c2)
{
	Complex C;
	C.real = c1.real + c2.real;
	C.img = c1.img + c2.img;
	return C;
}

Complex operator-(Complex c1,Complex c2)
{
	Complex C;
	C.real = c1.real - c2.real;
	C.img = c1.img - c2.img;
	return C;
}

Complex operator*(Complex c1,Complex c2)
{
	Complex C;
	C.real = (c1.real * c2.real) - (c1.img * c2.img);
	C.img = (c1.real * c2.img) + (c1.img * c2.real);
	return C;
}

int main()
{
	Complex c1(3,4);
	Complex c2(2,3);
	
	Complex A = c1+c2;
	Complex S = c1-c2;
	Complex M = c1*c2;
	
	A.display();
	S.display();
	M.display();
	
	return 0;
}
