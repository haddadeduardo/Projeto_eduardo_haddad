#include <iostream>
#include <math.h>

using namespace std;

class A{
	private:
		int a1;
		float a2;
	public:
		A(int a, float b);
		~A();
		int getA1();
		float getA2();
		void setA1(int a);
		void setA2(float b);
		void imprimeNomeClasse();
};

A::A(int a,float b){
	a1 = a;
	a2 = b;
	cout << "Construtor A" << endl;
}

A::~A(){
	a1 = -1;
	a2 = -1;
	cout << "Destrutor A" << endl;
}

int A::getA1(){
	cout << "getA1" << endl;
	return a1;
}

float A::getA2(){
	cout << "getA2" << endl;
	return a2;
}

void A::setA1(int a){
	a1 = a;
	cout << "setA1" << endl;
}

void A::setA2(float b){
	a2 = b;
	cout << "setA2" << endl;
}


class B{
	private:
		int b1;
		float b2;
	public:
		B(int a, float b);
		~B();
		int getB1();
		float getB2();
		void setB1(int a);
		void setB2(float b);
	
};

B::B(int a, float b){
	b1 = a;
	b2 = b;
	cout << "Construtor B" << endl;
}

B::~B(){
	b1 = -1;
	b2 = -1;
	cout << "Destrutor B" << endl;
}

int B::getB1(){
	cout << "getB1" << endl;
	return b1;
}

float B::getB2(){
	cout << "getB2" << endl;
	return b2;
}

void B::setB1(int a){
	b1 = a;
	cout << "setB1" << endl;
}

void B::setB2(float b){
	b2 = b;
	cout << "setB2" << endl;
}

int main()
{
	int a1, b1, aa1, bb1;
	float a2, b2, aa2, bb2;
	
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	
	A a(a1, a2);
	B b(b1, b2);

	
	aa1 = a.getA1();
	aa2 = a.getA2();
	a.setA1(aa1 * 2);
	a.setA2(aa2 * 2);
	aa1 = a.getA1();
	aa2 = a.getA2();
	
	bb1 = b.getB1();
	bb2 = b.getB2();
	b.setB1(bb1 * 4);
	b.setB2(bb2 * 4);
	b.getB1();
	b.getB2();
}
