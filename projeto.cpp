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
		void MA3();
		
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

void A::MA3(){
	cout << "Alteração a classe A partir do clone" << endl;
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
		void MB3();
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

void B:: MB3(){
	cout << "MB3" << endl;
}

class C{
	private:
		string c1;
		int c2;
	public:
		C(string c1, int c2);
		~C();
		void MC1();
		void MC2();
		void MC3();
};

C::C(string C1, int C2){
	c1 = C1;
	c2 = C2;
	cout << "Construtor C" << endl;
}

C::~C(){
	c1 = "VAZIO";
	c2 = -1;
	cout << "Destructor C" << endl;
}

void C::MC1(){
	cout << "MC1" << endl;
}

void C::MC2(){
	cout << "MC2" << endl;
}

void C:: MC3(){
	cout << "MC3" << endl;
}

class D{
	private:
		int D1, D2;
	public:
		D();
		~D();
		void MD1();
		void MD2();
		void MD3();
		void MD4();
};

D::D(){
	cout << "Construtor D" << endl;
}

D::~D(){
	cout << "Destrutor D" << endl;
}

void D::MD1(){
	cout << "MD1" << endl;
}

void D::MD2(){
	cout << "MD2" << endl;
}

void D::MD3(){
	cout << "MD3" << endl;
}

void D::MD4(){
	cout << "MD4" << endl;
}

int main()
{
	int a1, b1, aa1, bb1;
	float a2, b2, aa2, bb2;
	string c1;
	int c2;
	
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	
	A a(a1, a2);
	B b(b1, b2);
	C c(c1, c2);

	
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
	
	
	c.MC1();
	c.MC2();
}
