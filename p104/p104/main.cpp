#include <iostream>
using namespace std;

class Circle {
private: // Circle 안에서만 정의됨
	int radius;

public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

// 생성자 : 객체 생성 시 자동 생성
Circle::Circle() : Circle(1) {

}

Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 : " << radius  << " 원 생성" << endl;
}

Circle::~Circle() {
	cout << "반지름 : " << radius << " 원 소멸" << endl;
}

double Circle :: getArea()
{
	return 3.14 * radius * radius;
}

//Circle donut1(10);
//Circle donut2(11);
//Circle donut3(12);

void print_circle1(Circle* p);
void print_circle2(Circle p);

int main()
{
	Circle dount;
	double area = dount.getArea();
	cout << "donut의 면적 : " << area << " size : " << sizeof(dount) << endl;

	Circle* p; // donut의 주소를 넣을 수 있음
	p = &dount;
	area = p->getArea();

	print_circle1(&dount);
	print_circle2(dount);

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza의 면적 : " << area << endl;
}

// 객체의 주소값을 가져오는, 포인터변수를 포함한 함수
void print_circle1(Circle *p) {
	double area;
//	area = (*p).getArea();
	area = p->getArea();
	cout << "donut1의 면적은? : " << area << endl;
}

void print_circle2(Circle p) {
	double area;
	area = p.getArea();
	cout << "donut2의 면적은? : " << area << endl;
}