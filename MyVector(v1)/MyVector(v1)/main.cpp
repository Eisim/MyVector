#include<iostream>
#include"MyVector.h"
//vector (n lenght)
//type:double 
//+ - *(const) 
//normali

int main() {
	Vector a(3);
	Vector b(3);
	Vector c(3);
	a.randomfill();
	b.randomfill();
	std::cout << "a=";
	a.print();
	std::cout << "b=";
	b.print();




	std::cout << "c=";
	c.print();
	std::cout << "---c=a+b---";
	c = a + b;
	c.print();;
	std::cout << "---c=a-b---";
	c = a - b;
	c.print();
	std::cout << "---c=a*2---";
	c = a * 2;
	c.print();
	std::cout << "---c=2*a---";
	c = 2 * a;
	c.print();
	std::cout << "---norm c:" << c.getNorm() << std::endl;
	std::cout << "---a+=b---";
	a += b;
	a.print();
	std::cout << "---b-=a---";
	b -= a;
	b.print();
	std::cout << "---b*=-1---";
	b *= -1;
	b.print();

	//b = a;
	if (a != b)
		std::cout << "---a!=b---" << std::endl;
	if (a == b)
		std::cout << "---a==b---" << std::endl;
	std::cout << "a=" << a;
	std::cout << "b=" << b;
	std::cout << "c=" << c;

	std::cout << "size a:" << a.getSize() << std::endl;
	std::cout << "dot(a,b):" << a.dot(b) << std::endl;
	std::cout << "cout:" << a << std::endl;

	return 0;
}