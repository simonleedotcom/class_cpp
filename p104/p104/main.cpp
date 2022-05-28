#include <iostream>
using namespace std;

class Circle {
private: // Circle �ȿ����� ���ǵ�
	int radius;

public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

// ������ : ��ü ���� �� �ڵ� ����
Circle::Circle() : Circle(1) {

}

Circle::Circle(int r)
{
	radius = r;
	cout << "������ : " << radius  << " �� ����" << endl;
}

Circle::~Circle() {
	cout << "������ : " << radius << " �� �Ҹ�" << endl;
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
	cout << "donut�� ���� : " << area << " size : " << sizeof(dount) << endl;

	Circle* p; // donut�� �ּҸ� ���� �� ����
	p = &dount;
	area = p->getArea();

	print_circle1(&dount);
	print_circle2(dount);

	Circle pizza(30);
	area = pizza.getArea();
	cout << "pizza�� ���� : " << area << endl;
}

// ��ü�� �ּҰ��� ��������, �����ͺ����� ������ �Լ�
void print_circle1(Circle *p) {
	double area;
//	area = (*p).getArea();
	area = p->getArea();
	cout << "donut1�� ������? : " << area << endl;
}

void print_circle2(Circle p) {
	double area;
	area = p.getArea();
	cout << "donut2�� ������? : " << area << endl;
}